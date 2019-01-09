# Aragon Flock Proposal: Aragon DAC
<img align="right" src="https://wiki.aragon.org/design/logo/aragon_dac/logo_horizontal_transbg_small.png" height="80px" />

## Summary

We, the [Aragon DAC](http://aragondac.org/), are [the second development team to begin building out](https://medium.com/aragon-dac/aragon-dac-a-new-community-effort-to-foster-aragons-development-led-by-giveth-2228dcc17b63) core Aragon infrastructure. We would like to continue our efforts to improve the Aragon stack. 

This Flock proposal outlines the development projects the Aragon DAC plans to tackle in the next 6 months. 


We will spend 75% of our time continuing the development of: 
* aragonCLI
* aragonAPI
* hack.aragon.org
* Dapp-DAO Interactions

15% of our time on new development projects: 
* Function Registry DAO
* LiquidFunding & Liquid Democracy

And 10% of our time on developing a strong Aragon Ecosystem with these outreach projects:
* Online Office Hour Appointments
* In-Person Events


To accomplish these objectives, we are requesting a 333,000 DAI one-time payment, plus 80,000 ANT with 1-year cliff and 4-year vesting period.


This is the first of many Flock Proposals by the Aragon DAC. We hope to expand this team and spin out a user-focused Community R&D group in future Flock proposals to continue our mission to build the future of human collaboration with Aragon. 

One of our long term goals is to build a sustainable consulting service into our community. This will to support our development and bring outside funding into the improvement of the Aragon ecosystem. 

Note: This markdown file is an outline pulled from a more detailed proposal that can be viewed [here.](https://docs.google.com/document/d/1mQOWdZtCIBmXP5q8OcpZyhj9d8kqQ1zl9JLxJcHA5Zs/edit#) Please feel free to comment on this document.

## Deliverables

We expect to take an **agile approach**, adapting our scope based on community feedback to an open monthly status call.

**Metrics** are important to us. We will begin establishing quantifiable goals after baseline metrics have been collected in Q1.

<details>
  <summary h1> Improving Developer Experience (devX)</summary>
  
  Our primary goal: Give the community of developers building on top of Aragon a **solid foundation** to innovate upon.


Metrics to measure success:
* Watches, stars, and forks of Aragon repos
* [Downloads](https://npm-stat.com/charts.html?package=%40aragon%2Fcli&from=2018-01-01&to=2019-01-01) of Aragon packages 
* Traffic metrics for hack.aragon.org and developer oriented blog posts 
* Issues opened and closed in hack, CLI and API repos
* Requests for office hours

#### 101 aragonCLI
* We will own, maintain, and improve the aragonCLI repo. 
    * Focus on stability and robustness
* Specific goals:
    * Make it easy to [build custom DAOs](https://github.com/aragon/aragon-cli/issues/299) 
    * Support for Windows and a variety of nodeJS versions and web3 providers
    * [Refactor the repo](https://github.com/aragon/aragon-cli/issues/319) to achieve separation and speed
    * Strive for [100% code coverage testing](https://github.com/aragon/aragon-cli/issues/331)
* Guiding Values:
    * Anything that can be done through an Aragon UI should be possible through the CLI 
    * Fast turnaround on other Flock teams feature requests
    *  Give special attention and prioritization to teams external to Aragon looking to integrate their own platforms features, for instance (there are no plans for these features):
        *  Calling functions in DAOs from a [Status chat room](https://devpost.com/software/dao-to-go)
        *  Easy CDP creation on the DAI Dashboard
         
#### 102 aragonAPI
* We will own, maintain, and improve the aragonAPI repo. 
* Specific goals: 
    * Ensure the stability of aragon.js 
        * Maintaining support for multiple browsers and various nodeJS versions
        * Creating and implementing a testing strategy
        * Creating a formal specification
    * Improve developer experience 
        * Create case studies on how the Voting app and the Token Manager app use the API
        * Implement an error system 
    * Work with other teams to implement features

#### 103 hack.aragon.org
* We will own, maintain, and improve hack.aragon.org. 
    * [Move hack.aragon.org to a new design](https://github.com/aragon/hack/issues/64) (Assisted by A1)
    * Implement feature improvements
        * Feedback mechanisms to help surface areas that need more work 
        * Additional features are listed [here](https://docs.google.com/document/d/1B1nyb95LgBtrWY8Av0FnvnpUfvOb13wfjGZb28svSVs/edit#heading=h.8jcnm69vst4)
    * Do general day-to-day maintenance, responding to feedback 
* Begin the development of a new enhanced tutorial based on an [expanded approach](https://docs.google.com/document/d/1tb5RwEBpIxp2_wQmj0w2N5japdLI5mAgjdto7TMu8lY/edit?usp=sharing). 
    * Give a deeper understanding detailing why the tools work the way they do 
    * Illustrate the ideal development flow for a real world application.
</details>

<details>
  <summary> 
  <span style="font-size: 30pt;">Enabling Dapp-DAO Interactions</span>
   </summary>
  
 Our primary goal: Enable Aragon DAOs to take actions on external Dapps. We have a working prototype in Frame, see [our 4 minute demo video.](https://www.youtube.com/watch?v=uqb3fLNa7U8&feature=youtu.be)

Metrics to measure success:
* Being able to import an Aragon DAO and sign transactions with it (Provider)
* Number of Aragon DAOs using external Dapps (Provider)
* Number of functions registered (Function Registry DAO)

For our development stream this complicated objective has been divided into 4 parts:
#### 201 Keyring and Provider Engine
* Keyring Engine 
    * Enables Aragon DAOs to interact through custom web3 providers in the browser. 
        * Allows a DAO to be selected as the user identity in a browser
        * The result of a button click in a Dapp will initiate a vote on whether that action should be performed in the Aragon DAO. 
        * We have a working prototype
    * Using Frame for Browser support
        * Focusing 100% on building and testing this functionality on Frame
        * Current design is compatible with MetaMask
        * Long term goal is support for various desktop and mobile applications

* Provider Engine
    * Similar functionality as the Keyring engine but for CLI applications like truffle and future extensions. 
    * Almost complete but needs to be continuously updated and maintained. 

* Specific Goals: 
    * Finish the development of these tools
    * Support and maintain their core functionality upon completion


#### 202 Frame Integration
* Integrate the Provider Engine into Frame so that any DAO can be added to Frame’s interface. 
* Specific Goals: 
    * Build up the transaction flow 
    * Add more information to the confirm screen
    * Work with various Dapps to improve Frame compatibility
        * Currently working with Gitcoin developers to make Frame compatable with their Dapp
* Optimizing the integration will require the Agent app to be finalized 

#### 203 Agent/Actor App
* We will assist in the development of the Agent/Actor app as needed to support Frame integration. 
    * Ensure it complies to ERC712 and ERC721 standards 
        * Specifcally, we will ensure that the Actor app can handle token management, arbitrary contract interactions and offline signing. 

#### 204 Function Registry DAO
* Problem: 
    * Currently a vote for calling an external function lacks a human readible description.
*  Solution: 
    *  Allow the user creating the vote to input a decription, that can be later certified by a DAO
        1. The description is stored in a registry
        2. When displayed in a vote, the description has LOUD warnings advising voters not to trust the description, that it may be malicious and result in loss of DAO funds.
        3. These warnings can be removed when the registry's entry is certified by the Function Registry DAO. 
        4. This DAO will be a simple 2 of n multisig Aragon DAO with known and trusted Aragon developers from Flock teams as members. 
* Execution
    1. We will create a comprehensive specification for the registry
    2. Gather Flock team members approval of the specification and support to become members of the DAO
    3. Build out the registry
    4. Deploy the DAO
    5. Seed the registry with expected common entries
    6. Create a short tutorial for best practices when creating an entry


</details>
 
<details>
  <summary h4>Developing Use Cases</summary>
  
 Our primary goal: To learn and document how to efficiently use the Aragon stack for creating and running DAOs

Metrics to measure success:
* It's important to establish metrics that don’t promote overuse and a misallocation of development time.
* We will include more metrics as they become apparent. 
    * Experimental vote turnout within the team
    * Number of Apps installed in the DAC’s DAO
    * Execution on the Status DAO Roadmap (qualitative)
    * Number of issues submitted by organizations asking for development assistance closed by us
    

#### 301 Internal Use Cases

Hands-on experimentation with Aragon DAOs needs to be undertaken, and we, as a blockchain-based entity, are well positioned to attempt these experiments and document the results.

We will install Aragon apps into our own Aragon DAO and:
* Take signals from the research forums for what apps to install
* Vote with our Aragon DAO on whether or not to install each app
* Document their use with short medium posts
* Make bug reports and create issues
* Avoid being distracted by our own usage of these tools
    * We have experience with this from using the Giveth DApp

While developing the Function Registry DAO we will:
* Gain practice onboarding a friendly technical audience to a simple DAO
* Document its use with short medium posts
* Make bug reports and create issues
* Examine best practices to encourage participation


#### 302 External Development Support
We strive to support external development teams’ desired functionality of the platform. In this practice we expect to:
* Gain valuable perspective on features needed for developers unfamilar with the Aragon stack 
* Receive external validation of the developer experience using our tooling which will feed into the prioritization of development streams
* Direct external teams to use normal git flow for feature request and bug reporting

Our long term intention is to turn this work into a revenue stream by consulting with organizations to develop the tools needed for their desired governance models and onboard their teams to their own Aragon DAO.


##### LiquidFunding and Liquid Democracy
[Status](https://status.im) is in the process of building a DAO for the governance of their platform
* See this [post](https://discuss.status.im/t/status-network-layer-1-liquid-funding/747/2) for more details
* Status has a strong desire to implement a LiquidFunding Governance model
    * LiquidFunding is essentially Liquid Democracy for Fund Management.
        * It is a very novel governance system that doesn't require voting 
        * Giveth developed the contracts and two UIs for them and has ETH set aside for external audits
        * RJ and Griff have a deep understanding of this project 
    * With our assistance Status will build Aragon app for LiquidFunding, without it they will build their own custom UI. 
    * This application could easily be converted to a Liquid Democracy application.
* Current stage of development:
    * Status is finalizing the design spec 
    * The framework has been fully integrated into embark 
* Next steps:
    * Updating the smart contracts
        * Adding code coverage 
        * Adding revert strings 
        * Updating them to latest AragonOS release. 
    * Supporting the Status team throughout the development process
        * Our efforts will mostly be focused on the core smart contracts and advising Status in using the Aragon stack, their will do the heavy lifting 
    * Documentation of the process to inform future interactions like this
        * Using this experience we hope to build a consulting practice
* What we will deliver in 6 months:
    * Somewhat out of our control because of the reliance on Status' team
    * We will have onboarded Status to the Aragon Stack
    * We expect to have completed a proof of concept LiquidFunding app that can be used in a DAO
</details>


<details>
  <summary>Onboarding & Educating the Community</summary>
  
 ### 4. Onboarding & Educating the Community
Our primary goal: Provide the growing Aragon developer community direct access to experts that can guide them through the Aragon stack.

Metrics to measure success:
* Number of Office Hour Appointments
* Number of users added to the Aragon DAC Riot Channel 
* Number of offers for consulting services
#### 401 Online Office Hour Appointments
* Allow developers to have 15-60 minute sessions for detailed assistance dealing with the more complex questions of Aragon development. 
    * This will keep us in touch with the needs of the greater Aragon community
    * Potentially can give us opportunities to offer more direct consulting services for a fee 
#### 402 In-Person Events
* We will attend various events with a goal for each event and a strategy to achieve that goal.
* For the most part, Griff is the only member of the team that will attend these events
* There is a cap on expenses 
* Upcoming events we plan on attending: 
    * January: Meet up in Chiang Mai & during Aracon 
    * February: ETHDenver 
    * March: Ethereum Magicians, ETHCC & ETHParis
    * April: ETHCapetown
</details>


## Grant size

The Aragon DAC is requesting a 333,000 DAI one-time payment, plus 80,000 ANT with 1-year cliff and 4-year vesting period.

### Background

We spent $140,288 in the last 6 months (until Jan 7th). 
* $19,400 went to the Protofire team, for the payroll app 
* $120,888 to the DAC

We ran out of funds and had to take pay cuts to continue working.
* We kept the ETH given to us by the foundation as ETH on the Giveth DApp
    * The price of ETH crashed and we had to trim down our scope and hiring efforts
    * We will continue to work on the stack uninterrupted under the assumption that we will be reimbursed for this work upon receiving the Flock proposal. 

We only really stabilized the structure of the team in mid-November and completed our [first formal sprint on Janurary 4th](https://docs.google.com/presentation/d/e/2PACX-1vQkKz9pnmJ1u0ZWjOczvW5XKH9LktYND2V3RjqGd9r-Mg01C1FCoI7mwCqJNVzTKbOMEsGCouwcCmjW/pub). 
* We were challenged by the unexpected loss of hours from Arthur due to the holidays and a shift in his focus to a different Flock proposal
* We will continue these sprints and present them in open status meetings to the community

In the few months that we have had our team together we have made significant progress on the following core pieces of the Aragon Ecosystem:


 
  
 
<details><summary>aragonCLI</summary>
  
  * Workflow changes

    * Added [git hooks](https://github.com/aragon/aragon-cli/pull/279) to improve development workflow.

    * Refactored to [monorepo structure](https://github.com/aragon/aragon-cli/pull/325).

* Feature adds

    * Added [call command](https://github.com/aragon/aragon-cli/pull/141).

    * Added [silent and debug logging](https://github.com/aragon/aragon-cli/pull/223) options.

    * Enabled [environments in arapp.json](https://github.com/aragon/aragon-cli/pull/230).

    * Added a new command [aragon start](https://github.com/aragon/aragon-cli/pull/255).

    * Updated aragon run to include [pre-build of client](https://github.com/aragon/aragon-cli/pull/318).

    * Added APM [info & package](https://github.com/aragon/aragon-cli/pull/253) commands.

* Maintenance changes

    * Deprecated [aragon init](https://github.com/aragon/aragon-cli/pull/323) in favor of [create-aragon-app](https://github.com/AragonDAC/create-aragon-app).

    * Handled [arapp.json parsing errors](https://github.com/aragon/aragon-cli/pull/330).

    * Displayed more info when an app’s [content cannot be found](https://github.com/aragon/aragon-cli/pull/284).

    * Implemented better [ipfs running check](https://github.com/aragon/aragon-cli/pull/245).

    * Removed licenses when [preparing template](https://github.com/aragon/aragon-cli/pull/234).

    * Added filter for [files passed as parameter](https://github.com/aragon/aragon-cli/pull/313) to not be ignored.

    * Imported [devchain from aragen](https://github.com/aragon/aragon-cli/pull/246).

    * Cleaned up [APM](https://github.com/aragon/aragon-cli/pull/233).

    * Updated [yargs v12](https://github.com/aragon/aragon-cli/pull/248).

    * Allowed [setting permissions](https://github.com/aragon/aragon-cli/pull/254) on app install.

* Bugs

    * Fixed [broken dependencies](https://github.com/aragon/aragon-cli/issues/215).

    * Fixed [linting check](https://github.com/aragon/aragon-cli/pull/221) and warnings.

    * Fixed [setPermissions in DAO install](https://github.com/aragon/aragon-cli/pull/303).

    * Prevented [conflicts between major aragonOS versions](https://github.com/aragon/aragon-cli/pull/329).

    * Fixed [printing apps table](https://github.com/aragon/aragon-cli/pull/236).

    * Fixed bug in [acl view cmd](https://github.com/aragon/aragon-cli/pull/252).
</details>

<details>
  <summary>aragonAPI</summary>
  
  * Workflow changes

    * Wrote unit tests for the [client](https://github.com/aragon/aragon.js/pull/161), [wrapper](https://github.com/aragon/aragon.js/pull/147) and [messenger](https://github.com/aragon/aragon.js/pull/129) packages.

    * Setup [linting on commits and integrated prettier](https://github.com/aragon/aragon.js/pull/221) to speed up development and reduce back and forth on PRs.

    * Setup [metrics for the library size](https://github.com/aragon/aragon.js/pull/220).

* Feature adds

    * Created a [provider engine](https://github.com/aragon/aragon.js/pull/165) which allows forwarder accounts in a DAO to be used as an account by truffle.

    * [Added intents for external contracts](https://github.com/aragon/aragon.js/pull/182) to allow apps to write to other contracts, not just their main one.

    * Allowed [apps to get information about the kernel](https://github.com/aragon/aragon.js/pull/178).

    * [Allowed specifying tokenName and tokenSymbol](https://github.com/aragon/aragon.js/pull/177) when creating new DAOs.

* Maintenance changes

    * [Rewrote the API for Aragon apps using events and promises](https://github.com/aragon/aragon.js/pull/230) which will make it easier for people without RxJS knowledge to get started.

    * Setup [docs to be generated from the source code](https://github.com/aragon/aragon.js/pull/228).

    * [Updated all packages to RxJS 6](https://github.com/aragon/aragon.js/pull/123) which is supposed greatly reduce the bundle size.

    * Setup [IndexedDB](https://github.com/aragon/aragon.js/pull/208) to leverage higher storage limits for caching.

    * Pulled [contract ABIs from @aragon/os](https://github.com/aragon/aragon.js/pull/205) so we don’t have to manually sync them.

    * Added error handling if the [DAO is not found](https://github.com/aragon/aragon.js/pull/152) by its address.

    * Added [more intuitive error emissions](https://github.com/aragon/aragon.js/pull/151).

* Bugs

    * Fixed the [@aragon/wrapper options](https://github.com/aragon/aragon.js/pull/153).
</details>


<details>
  <summary>hack.aragon.org</summary>
  
  * Edits throughout site to improve clarity, tone, style, and grammar.  PRs:[ 42](https://github.com/aragon/hack/pull/42),[ 43](https://github.com/aragon/hack/pull/43),[ 44](https://github.com/aragon/hack/pull/44),[ 47](https://github.com/aragon/hack/pull/47),[ 49](https://github.com/aragon/hack/pull/49),[ 51](https://github.com/aragon/hack/pull/51).

* Created a[ product backlog](https://docs.google.com/document/d/1B1nyb95LgBtrWY8Av0FnvnpUfvOb13wfjGZb28svSVs/edit#heading=h.8jcnm69vst4) for the site to improve functionality; this has been handed off to Adri to incorporate into new designs.

* Came up with a[ plan for a new expanded tutorial](https://docs.google.com/document/d/1tb5RwEBpIxp2_wQmj0w2N5japdLI5mAgjdto7TMu8lY/edit#) and[ started writing it](https://github.com/aragon/hack/blob/new-tutorial/docs/tutorial.md).

* Created a [CONTRIBUTING.md file](https://github.com/aragon/hack/pull/50).

* Salvaged what we could from[ Derek’s unfinished work](https://github.com/aragon/hack/pull/46).

* Assisted with[ updating the docs to aragonOS 4](https://github.com/aragon/hack/pull/56).

* [Renamed packages](https://github.com/aragon/hack/pull/62) throughout the docs.

* Setup aragon.js documentation to[ pull directly from source code](https://github.com/aragon/hack/pull/66).

* [Improved the diagrams](https://github.com/aragon/hack/pull/75).
</details>

<details>
  <summary>DAO-Dapp Interactions</summary>
  
  We mainly focused our efforts on two tools that will enable Aragon DAOs to interact directly with Ethereum Dapps:

* The [Wallet Provider](https://github.com/jvluso/aragon.js/tree/wallet-provider-2/packages/aragon-wallet-provider). This allows you to use an Aragon DAO in a Truffle CLI to interact with smart contracts.  It is currently 98% complete and will likely be merged before the Flock vote.

* The [Aragon Keyring](https://github.com/jvluso/eth-aragon-keyring).  This provides the same seamless integration but for browsers on desktop and eventually mobile through their web3 provider.  

We also are have done some work in the [Frame repo](https://github.com/floating/frame/pull/119/commits) and have produced a working prototype. [Watch our 4 minute video demo](https://www.youtube.com/watch?v=uqb3fLNa7U8&feature=youtu.be).
</details>


<details>
  <summary>Other repos</summary>
  
  * aragon/aragon:

    * Use [ProxyAddress instead of AppId](https://github.com/aragon/aragon/pull/222) for identifying apps.

    * Add [error handling for dao not found](https://github.com/aragon/aragon/pull/409).

    * Remove [isNameAvailable](https://github.com/aragon/aragon/pull/388) from daoBuilder.

    * aragon-wrapper: [remove KERNEL_BASE](https://github.com/aragon/aragon/pull/391).

    * Changes [to have a pre-build client](https://github.com/aragon/aragon/pull/555).

* Aragen: 

    * Add basic [cli & devchain cmd](https://github.com/aragon/aragen/pull/24).

* Boilerplates:

    * Update [kit.sol and dependencies](https://github.com/aragon/aragon-react-kit-boilerplate/pull/21).

    * Add environments and updated config for [react](https://github.com/aragon/aragon-react-boilerplate/pull/33), [react-kit](https://github.com/aragon/aragon-react-kit-boilerplate/pull/22) and [bare](https://github.com/aragon/aragon-bare-boilerplate/pull/12).
</details>


### Estimated operating costs for 2019

Part of this grant will pay us and Protofire back for the work that has been done in the past and will be done in January. 
* The last 3 [Protofire milestones](https://docs.google.com/spreadsheets/d/1usLkQpKj8KYLtpa_ytiCiJscyyO-dfO6j0IcEdYdaCQ/edit?usp=sharing): 28,000 DAI
* Griff's [work for July-Jan 31st](https://docs.google.com/spreadsheets/d/1gSs1LFhW0eC5TvxOfkaDjFID1ObAgdADe9lgYTpA5iM/edit?usp=sharing): 21,350 DAI  
* The rest of the team up until Jan 31st: 28,150 DAI

Because of our distributed freelance-style organizational structure and focus on development we have very few costs outside of direct payment for hours worked. Our 6-month budget is split between:
* Core Team Payroll: 220,500 DAI 
* Contractors: 20,000 DAI
* Team Offsite and Travel Expenses: 15,000 DAI

In total this is **333,000 DAI**.

**Note:** We designed this proposal to be as minimal as possible to reduce the drain of funds on the Aragon Association during Crypto Winter. We are likely to expand the team in the future using other Flock proposals and the AGP process.

### ANT Package

We would like to request 80,000 ANT, with 1-year cliff and 4-year vesting for our team. No ANT will be given for previous work with the DAC.


## Requirements
* Blog access on request on blog.aragon.org
* Website access on request to all Aragon domains
* Unrestricted use of the Aragon trademark
* Publish access to aragonpm.eth
* Admin/moderator access on aragon.chat, forum.aragon.org, and /r/AragonProject
* Access to site traffic analytics on hack.aragon and the medium blog 


## Core Team

The team is fully remote and distributed across the globe.

### Development
* **Jeremy: [GitHub](https://github.com/jvluso)**
    * Based in the US
    * Full-time, no other commitments
    * An experienced full stack developer 
    * Excited to use DAOs to build dual power internationally
    * Focused on enabling Dapp-DAO interactions and Smart Accounts (Personal DAOs)
* **Daniel: [GitHub](https://github.com/0x6431346e)**
    * Based in Europe
    * Full-time, no other commitments
    * A very skilled front end dev with a maintainer personality, willing to do all the dirty work necessary to make this magic happen.
    * A decentralization maximalist that escaped the corporate world to support a sustainable open-source ecosystem
    * Focused on aragonAPI and aragonCLI
* **Gabi: [GitHub](https://github.com/galactusss), [Twitter](https://twitter.com/Krroonnos), [LinkedIn](https://www.linkedin.com/in/gabrielgarciacarrea)**
    *  Based in South America
    * Full-time, no other commitments
    * An enthusiastic junior dev willing to bust his chops on the unexciting foundational pieces, always looking for ways to improve 
    * Firm believer of Aragon's mission. Passion about open source code and bullish about the future of web3.0
    * Focusing most of his time maintaining aragonCLI. Will help create new tutorials for hack.aragon and provide general support
* **Arthur: [GitHub](https://github.com/Quazia)**
    * Based in the US
    * 10 hours a week for 4 months, also working with Autark 
    * Experienced solidity engineer and auditor with the White Hat Group
    * Excited to bring tools to the open source community to enable long term sustainable development and governance to organizations on the fringe of what's possible
    * Focusing his time on improving the CLI and building out the Function Registry DAO.
* **RJ: [GitHub](https://github.com/perissology)**
    * Based in the US
    * 20 hours a week for 3 months (may be extended), also working 5-10 hours a week on maintaining the Giveth DApp and being a family man.
    * A rockstar solidity engineer that produces extremely high quality work. Full stack dev, especially experienced with backend and devops.  
    * Dedicated to making the world a better place with blockchain tech
    * Will focus most of his time on getting Status’ LiquidFunding DAO on Aragon so that the modules they produce can be used by all Aragon DAOs.
### Project Management
* **Chris: [GitHub](https://github.com/cjyabraham), [LinkedIn](https://www.linkedin.com/in/cjyabraham)**
    * Based in Southeast Asia
    * 30 hours a week, working 10 hours a week as a software engineer for the Linux foundation
    * Very experienced PM and Engineer who has managed projects for companies like Samsung and Metlife in the past as well as in the open source world.
    * Accepts the challenge of ensuring the team delivers the right things in the right way at the right time. 
    * Leads the documentation effort for Aragon as well.
### Founder and Product Owner
* **Griff: [GitHub](https://github.com/griffgreen ), [Twitter](https://twitter.com/thegrifft), [LinkedIn](https://www.linkedin.com/in/griffgreen)**
    * Globally nomadic
    * 20 hours a week, working low variable hours on DAppNode and iden3, and spends the rest of his free time pushing Giveth forward. 
    * Dedicated his life to building out the infrastructure needed for impactful DAOs to exist.
    * More hands-on experience with decentralized organizations on Ethereum than anyone on the planet.
    * Well known figure with a strong network within the Ethereum space. 
    * Leads the core team using a decentralized approach. Acts as the face of the DAC and coordinates with external teams. 

## Organization Structure
### Legal and Financial Structure
* No official legal entity
* Using an Aragon DAO for governance and a Gnosis multisig to store funds
    * All payments will go through the Aragon DAO
* Effectively using the cooperative model
    * 100% of the funds received will go to pay for salaries and expenses incurred
    * We will maintain a transparent burn rate using this blockchain-based organizational structure

### Team Governance
We will maintain a flat hierarchical structure, and, along side our Aragon DAO, we will use [Loomio](https://www.loomio.org/g/rMsYTAR8/aragon-dac) to make decisions.

We will hold open monthly status meetings, see last month's [Status Report](https://docs.google.com/presentation/d/e/2PACX-1vQkKz9pnmJ1u0ZWjOczvW5XKH9LktYND2V3RjqGd9r-Mg01C1FCoI7mwCqJNVzTKbOMEsGCouwcCmjW/pub)

We will utilize a standard agile delivery model as described [here](https://docs.google.com/document/d/1WT3XcnMw0LZOo0Q7gaKy_cFMGZ7xS3mUuIH9uilLNBU/edit). Which can be followed in real time in our [Zenhub](https://app.zenhub.com/workspaces/all-aragon-repos-5996d0a88c7c6963f4a4dfdc/boards?repos=98191281,104566586,133385725). 
 
### Plan to Contribute to the Greater Good
We call ourselves the Aragon Decentralized Altruistic Community because we believe the Aragon ecosystem has the potential to change the way humans collaborate around tragedy of the commons issues. We hope to eventually support communities that want to use the Aragon stack with the purpose of creating new incentive structures to align community efforts and change the world for the better in an altruistic way. 

Despite being altruistically minded, we plan on creating an Aragon consulting service and charging for our services when we interact with for-profit organizations. We will use this service, to support non-profit efforts pro bono, however they will only ever receive a maximum of 10% of our development time, as building out the Aragon infrastructure for all to use is our top concern.


The Aragon ecosystem is not ready for this effort to really begin, which is why there is no mention of it in this proposal. We will spend 0 hours supporting altruistic efforts during the next 6 months. 

