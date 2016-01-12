#include <boost/algorithm/string.hpp>
#include <boost/foreach.hpp>
#include <boost/test/unit_test.hpp>

#include "util.h"

BOOST_AUTO_TEST_SUITE(getarg_tests)

static void
ResetArgs(const std::string& strArg)
{
    std::vector<std::string> vecArg;
    boost::split(vecArg, strArg, boost::is_space(), boost::token_compress_on);

    // Insert dummy executable name:
    vecArg.insert(vecArg.begin(), "testbitcoin");

    // Convert to char*:
    std::vector<const char*> vecChar;
    BOOST_FOREACH(std::string& s, vecArg)
        vecChar.push_back(s.c_str());

    ParseParameters(vecChar.size(), &vecChar[0]);
}

BOOST_AUTO_TEST_CASE(boolarg)
{
    ResetArgs("-COCO");
    BOOST_CHECK(GetBoolArg("-COCO"));
    BOOST_CHECK(GetBoolArg("-COCO", false));
    BOOST_CHECK(GetBoolArg("-COCO", true));

    BOOST_CHECK(!GetBoolArg("-fo"));
    BOOST_CHECK(!GetBoolArg("-fo", false));
    BOOST_CHECK(GetBoolArg("-fo", true));

    BOOST_CHECK(!GetBoolArg("-COCOo"));
    BOOST_CHECK(!GetBoolArg("-COCOo", false));
    BOOST_CHECK(GetBoolArg("-COCOo", true));

    ResetArgs("-COCO=0");
    BOOST_CHECK(!GetBoolArg("-COCO"));
    BOOST_CHECK(!GetBoolArg("-COCO", false));
    BOOST_CHECK(!GetBoolArg("-COCO", true));

    ResetArgs("-COCO=1");
    BOOST_CHECK(GetBoolArg("-COCO"));
    BOOST_CHECK(GetBoolArg("-COCO", false));
    BOOST_CHECK(GetBoolArg("-COCO", true));

    // New 0.6 feature: auto-map -nosomething to !-something:
    ResetArgs("-noCOCO");
    BOOST_CHECK(!GetBoolArg("-COCO"));
    BOOST_CHECK(!GetBoolArg("-COCO", false));
    BOOST_CHECK(!GetBoolArg("-COCO", true));

    ResetArgs("-noCOCO=1");
    BOOST_CHECK(!GetBoolArg("-COCO"));
    BOOST_CHECK(!GetBoolArg("-COCO", false));
    BOOST_CHECK(!GetBoolArg("-COCO", true));

    ResetArgs("-COCO -noCOCO");  // -COCO should win
    BOOST_CHECK(GetBoolArg("-COCO"));
    BOOST_CHECK(GetBoolArg("-COCO", false));
    BOOST_CHECK(GetBoolArg("-COCO", true));

    ResetArgs("-COCO=1 -noCOCO=1");  // -COCO should win
    BOOST_CHECK(GetBoolArg("-COCO"));
    BOOST_CHECK(GetBoolArg("-COCO", false));
    BOOST_CHECK(GetBoolArg("-COCO", true));

    ResetArgs("-COCO=0 -noCOCO=0");  // -COCO should win
    BOOST_CHECK(!GetBoolArg("-COCO"));
    BOOST_CHECK(!GetBoolArg("-COCO", false));
    BOOST_CHECK(!GetBoolArg("-COCO", true));

    // New 0.6 feature: treat -- same as -:
    ResetArgs("--COCO=1");
    BOOST_CHECK(GetBoolArg("-COCO"));
    BOOST_CHECK(GetBoolArg("-COCO", false));
    BOOST_CHECK(GetBoolArg("-COCO", true));

    ResetArgs("--noCOCO=1");
    BOOST_CHECK(!GetBoolArg("-COCO"));
    BOOST_CHECK(!GetBoolArg("-COCO", false));
    BOOST_CHECK(!GetBoolArg("-COCO", true));

}

BOOST_AUTO_TEST_CASE(stringarg)
{
    ResetArgs("");
    BOOST_CHECK_EQUAL(GetArg("-COCO", ""), "");
    BOOST_CHECK_EQUAL(GetArg("-COCO", "eleven"), "eleven");

    ResetArgs("-COCO -bar");
    BOOST_CHECK_EQUAL(GetArg("-COCO", ""), "");
    BOOST_CHECK_EQUAL(GetArg("-COCO", "eleven"), "");

    ResetArgs("-COCO=");
    BOOST_CHECK_EQUAL(GetArg("-COCO", ""), "");
    BOOST_CHECK_EQUAL(GetArg("-COCO", "eleven"), "");

    ResetArgs("-COCO=11");
    BOOST_CHECK_EQUAL(GetArg("-COCO", ""), "11");
    BOOST_CHECK_EQUAL(GetArg("-COCO", "eleven"), "11");

    ResetArgs("-COCO=eleven");
    BOOST_CHECK_EQUAL(GetArg("-COCO", ""), "eleven");
    BOOST_CHECK_EQUAL(GetArg("-COCO", "eleven"), "eleven");

}

BOOST_AUTO_TEST_CASE(intarg)
{
    ResetArgs("");
    BOOST_CHECK_EQUAL(GetArg("-COCO", 11), 11);
    BOOST_CHECK_EQUAL(GetArg("-COCO", 0), 0);

    ResetArgs("-COCO -bar");
    BOOST_CHECK_EQUAL(GetArg("-COCO", 11), 0);
    BOOST_CHECK_EQUAL(GetArg("-bar", 11), 0);

    ResetArgs("-COCO=11 -bar=12");
    BOOST_CHECK_EQUAL(GetArg("-COCO", 0), 11);
    BOOST_CHECK_EQUAL(GetArg("-bar", 11), 12);

    ResetArgs("-COCO=NaN -bar=NotANumber");
    BOOST_CHECK_EQUAL(GetArg("-COCO", 1), 0);
    BOOST_CHECK_EQUAL(GetArg("-bar", 11), 0);
}

BOOST_AUTO_TEST_CASE(doubledash)
{
    ResetArgs("--COCO");
    BOOST_CHECK_EQUAL(GetBoolArg("-COCO"), true);

    ResetArgs("--COCO=verbose --bar=1");
    BOOST_CHECK_EQUAL(GetArg("-COCO", ""), "verbose");
    BOOST_CHECK_EQUAL(GetArg("-bar", 0), 1);
}

BOOST_AUTO_TEST_CASE(boolargno)
{
    ResetArgs("-noCOCO");
    BOOST_CHECK(!GetBoolArg("-COCO"));
    BOOST_CHECK(!GetBoolArg("-COCO", true));
    BOOST_CHECK(!GetBoolArg("-COCO", false));

    ResetArgs("-noCOCO=1");
    BOOST_CHECK(!GetBoolArg("-COCO"));
    BOOST_CHECK(!GetBoolArg("-COCO", true));
    BOOST_CHECK(!GetBoolArg("-COCO", false));

    ResetArgs("-noCOCO=0");
    BOOST_CHECK(GetBoolArg("-COCO"));
    BOOST_CHECK(GetBoolArg("-COCO", true));
    BOOST_CHECK(GetBoolArg("-COCO", false));

    ResetArgs("-COCO --noCOCO");
    BOOST_CHECK(GetBoolArg("-COCO"));

    ResetArgs("-noCOCO -COCO"); // COCO always wins:
    BOOST_CHECK(GetBoolArg("-COCO"));
}

BOOST_AUTO_TEST_SUITE_END()
