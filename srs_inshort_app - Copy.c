/*
table of content
1.introduction
a.introduction
b.purpose/objective
c.scope
d.glossary
e.overview


2.overall description
a.product perspective
b.product functions
c.user characteristic
d.constraints
e.assumptions and dependencies

3.requirement specification

A.functional requirement
i.performance requirement
ii.design constraints
iii.hardware requirement
iv.software requirement
v.other requirement

B.non-functional requirement
i.security
ii.relaibility
iii.availibility
iv.maintainability
v.supportibility

4.diagram
a.use case diagram
b.class diagram
c.state diagram
d.sequence diagram
e.data flow diagram


5.test case


*/


/*
InShorts is a news aggregation app that provides users 
with concise and to-the-point news stories in a quick 
and easy-to-read format.
 The app was founded in 2013 by Azhar Iqubal,
  Anunay Arunav, and Deepit Purkayastha, 
  and has since grown to become one of the most popular news apps in India.



The app uses an algorithm to curate news
 stories from a variety of sources,
 including newspapers, websites, and news agencies. 
These stories are then condensed into 60-word summaries,
 making it easy for users to quickly catch up on the day's news.
 In addition to the summaries, 
 each story also includes a headline, a photo, 
 and a link to the original source.



InShorts covers a wide range of topics, including politics, 
sports, entertainment, business, technology, and more.
 The app is available in both English and Hindi,
and users can customize their news feeds based on
 their interests and preferences.



Overall, InShorts provides a convenient and
 efficient way for users to stay informed about 
 the world around them, 
without having to spend hours
 reading through lengthy news articles.

*/


/*

The purpose of the Software Requirements Specification (SRS)
 for the InShorts app is to clearly define the requirements 
 and functionality of the application, 
 as well as the constraints and limitations 
 that must be considered during its development. 
 The SRS serves as a blueprint for the development team, 
 outlining the goals and objectives of the app 
 and providing a basis for testing and validation.




The objectives of the SRS for the InShorts app may include:

Defining the functional requirements of the application,
 such as user authentication, news story curation, 
 and customization options.
 
 
 
Defining the non-functional requirements,
 such as performance, scalability, and security.
 
 
Identifying the constraints and limitations,
 such as hardware and software compatibility,
  data privacy, and regulatory compliance.
  
  
Describing the user interface and 
user experience requirements,
 including design guidelines and user feedback mechanisms.
 
 
 
Establishing the scope and boundaries of the application,
 including the target audience and supported platforms.
 
 
Outlining the development and testing methodologies,
 including quality assurance and maintenance procedures.
 
 
Providing a basis for communication and 
collaboration between the development team and stakeholders, 
including investors, users, and other interested parties.


Overall, the SRS serves as a crucial document
 in the development of the InShorts app,
  ensuring that the requirements and objectives
   of the app are clearly defined and understood 
   by all stakeholders involved in its development and deployment.

*/




/*
The scope of the InShorts app refers to the boundaries and
 limitations of the application, 
 as well as the functionality and features that it includes.
  The scope of the app can be defined by various factors, 
  including the target audience, the purpose of the app, 
  and the resources available for its development.

The scope of the InShorts app includes:

News Aggregation: The app will aggregate news stories
 from various sources, including newspapers, websites,
  and news agencies.

Summarization: The app will summarize the news stories
 into 60-word summaries, providing users with quick and
  easy-to-read news updates.

Categorization: The app will categorize news stories into 
different topics, including politics, sports, entertainment,
 business, and technology.

Customization: The app will allow users
 to customize their news feeds based on
  their interests and preferences.

Push Notifications: The app will send push 
notifications to users for breaking news stories
 or important updates.

User Authentication: The app will provide user
 authentication and login functionality to ensure
  that only authorized users can access the app.

User Feedback: The app will provide
 users with the ability to provide feedback 
 and rate the news stories, 
 which can be used to improve the app's curation 
 and summarization algorithms.

Language Support: The app will
 support both English and Hindi languages.

Overall, the scope of the InShorts app
 is focused on providing users with a fast and 
 efficient way to stay informed about the news, 
 while also providing customization and
  feedback options to enhance the user experience.
*/



/*
here's the glossary for the InShorts app:

News Aggregation: The process of collecting news
 stories from various sources, such as newspapers,
  websites, and news agencies.

Summarization: The process of condensing
 a news story into a brief summary, usually 60 words or less.

Categorization: The process of organizing
 news stories into different topics or categories,
  such as politics, sports, entertainment, business,
   and technology.

Customization: The ability for users
 to tailor their news feeds based on 
 their interests and preferences.

Push Notifications: Alerts or messages sent to 
\users' devices to inform them of breaking news 
or important updates.

User Authentication: The process of verifying
 the identity of a user through login credentials,
  such as a username and password.

User Feedback: The process of collecting feedback from users,
 which can be used to improve the app's functionality and user
  experience.

Quality Assurance: The process of ensuring 
that the app meets the specified requirements and 
standards through testing and validation.

Maintenance: The process of keeping the app up-to-date,
 fixing bugs, and addressing any issues or problems that arise.

Performance: The ability of the app to operate 
efficiently and quickly, without errors or delays.

Scalability: The ability of the app to handle
 increasing numbers of users and data without
  affecting performance.

Security: The measures taken to protect user
 data and the app from unauthorized access,
  data breaches, and other security threats.

Regulatory Compliance: The app's adherence to legal and 
regulatory requirements, such as data privacy and
 security regulations.
 
*/




/*
The InShorts app is a news aggregation and
 summarization application that provides users with a quick 
 and efficient way to stay informed about the news. 
 The app collects news stories from various sources,
 including newspapers, websites, and news agencies, and 
 condenses them into 60-word summaries,
  which users can easily read and understand.



Overall, the InShorts app provides a convenient and 
user-friendly way for individuals to stay informed about the news,
 while also offering customization options and
  user feedback mechanisms to enhance the user experience.
*/



/*
The product perspective of the InShorts app refers to
 how the app fits into the larger context of the industry
  and market,
 as well as how it interacts with other systems or products.

From an industry perspective,
 the InShorts app is part of the digital news media market,
  which includes news websites, mobile apps,
   and social media platforms that provide users 
   with access to news and information.
    The app competes with other news aggregation 
	and summarization apps such as Flipboard and Google News,
	 as well as with traditional news outlets
	  that have digital platforms.

The app interacts with other systems or products in a few ways.
 Firstly, it collects news stories from various sources, 
 including newspapers, websites, and news agencies,
  and summarizes them into brief news updates.
   Secondly, it allows users to customize their news feeds and
    receive push notifications for breaking news or 
	important updates. Finally, it provides a platform for
	 user feedback, 
	 which can be used to improve the app's algorithms and 
	 user experience.

From a technical perspective, 
the InShorts app is developed using mobile app development
 frameworks, programming languages,
  and software development tools.
   It requires a server-side system to collect and 
   store news stories, 
   as well as APIs to access third-party data sources. 
   It also requires robust security measures to
    protect user data and ensure compliance with
	 regulatory requirements.

Overall, the product perspective of
 the InShorts app involves considering its place in the market
  and industry, as well as its interactions with other systems
   and products.
*/



/*
The product function of the InShorts app
 refers to the specific features and capabilities
  of the app that enable it to meet user needs
   and achieve its objectives.

The primary function of the InShorts app is news aggregation and summarization. It collects news stories from various sources, such as newspapers, websites, and news agencies, and condenses them into 60-word summaries,
 which users can quickly read and understand.
  The app also categorizes news stories into 
  different topics or categories, such as politics,
   sports, entertainment, business, and technology.

Another key function of the app is customization. 
Users can tailor their news feeds based on their interests 
and preferences, ensuring that they receive news updates
 that are most relevant to them. 
 The app also offers push notifications
  for breaking news or important updates,
   which helps users stay informed about the latest developments.

In addition to news aggregation and customization,
 the InShorts app offers user authentication
  and feedback mechanisms.
   User authentication ensures that users can securely
    access the app and their personalized news feeds.
	 User feedback allows users to rate news stories,
	  provide comments, and suggest improvements,
	   which helps to enhance the app's algorithms 
	   and user experience.

To ensure the quality 
and reliability of the app,
 the InShorts team must also 
 perform quality assurance testing and maintenance.
  The app's performance and scalability are also critical 
  functions to consider, 
  as it must be able to handle increasing numbers
   of users and data without affecting its efficiency or speed.

Overall, the product function of the InShorts app
 involves providing users with a quick, efficient,
  and personalized way to stay informed about the news,
   while also offering user authentication, feedback mechanisms,
    and quality assurance measures.
*/

/*
The InShorts app targets a broad range of users 
who are interested in staying informed about the
 news in a quick and efficient manner.
  The app's user characteristics can be summarized as follows:

Tech-savvy: The app is designed for users who
 are comfortable using smartphones and mobile apps.
  Users should be able to navigate the app's interface
   and customize their news feeds based on their interests 
   and preferences.

Time-constrained: The app is designed for users 
who have limited time to read news stories in their entirety.
 The app's 60-word summaries allow users to quickly scan
  through news updates and get a quick overview of the most 
  important developments.

News enthusiasts: The app is designed for
 users who have a general interest in the news 
 and want to stay informed about the latest developments.
  The app caters to users who are interested in a broad
   range of topics, including politics, sports, entertainment, 
   business, and technology.

Personalization seekers: The app is designed 
for users who want to tailor their news feeds 
based on their interests and preferences. 
The app allows users to choose the topics they 
are interested in and receive push notifications 
for breaking news or important updates.

Feedback providers: The app is designed 
for users who are willing to provide feedback
 on news stories and the app's functionality. 
 User feedback helps the app's algorithms learn
  and improve, providing a better user experience for everyone.

Overall, the InShorts app targets a
 diverse group of users who are interested 
 in staying informed about the news,
  but may have limited time or prefer a more
   efficient and personalized way to consume news content.
*/







/*
The InShorts app may face various constraints that can impact its functionality, usability, and user experience. Some of these constraints are:

Data availability: The app's success relies heavily on the availability and accuracy of news stories from various sources. Any disruption in the availability of data or inaccuracies in the news stories can impact the quality of the app's content.

Technical limitations: The app's functionality and usability are dependent on the capabilities of the devices it runs on. Compatibility issues, hardware limitations, and software bugs can impact the app's performance and user experience.

Security and privacy: The app handles sensitive user information, such as personal preferences, login credentials, and user feedback. Any data breaches or privacy violations can undermine users' trust in the app and damage the app's reputation.

Regulatory compliance: The app must comply with various laws and regulations related to data protection, content moderation, and user privacy. Failure to comply with these regulations can result in legal consequences, financial penalties, and reputational damage.

User adoption: The app's success depends on its ability to attract and retain users. If users do not find the app's content or features compelling, they may switch to other news apps or traditional news sources.

Overall, the InShorts app faces various constraints that must be taken into account to ensure its functionality, usability, and user experience. The app's team must be proactive in addressing these constraints and ensuring the app's continued success.




*/


/*
Assumptions and dependencies are important considerations for any software product, including the InShorts app. Here are some possible assumptions and dependencies for the InShorts app:

Assumptions:

Availability of news sources: The app assumes that there will always be a sufficient supply of news stories from various sources that can be aggregated and summarized.
User interest in news: The app assumes that there is a significant and sustained interest among users in staying informed about the news.
User willingness to provide feedback: The app assumes that users will be willing to provide feedback on news stories and the app's functionality.
User comfort with app technology: The app assumes that users are comfortable using mobile apps and smartphones to access news content.
Dependencies:

Reliable and secure data storage: The app depends on reliable and secure data storage to store user preferences, feedback, and other user-related data.
Mobile operating systems: The app depends on the underlying mobile operating systems (e.g., Android, iOS) to run and deliver its features and functionality.
Network connectivity: The app depends on network connectivity (e.g., Wi-Fi, cellular data) to access news sources, deliver news updates, and enable user feedback.
Content providers: The app depends on content providers, such as news agencies, newspapers, and websites, to supply the news stories that are summarized and delivered to users.
Compliance with laws and regulations: The app depends on compliance with various laws and regulations related to data protection, content moderation, and user privacy to ensure its continued operation.
Overall, the InShorts app is dependent on various factors that must be considered and addressed to ensure its continued functionality and success. The app's team must be aware of these assumptions and dependencies and work proactively to mitigate any risks that may arise.
*/










/*
Performance requirements or functional requirements specify the software's capabilities and how well it must perform to meet user needs. Here are some potential performance requirements for the InShorts app:

Speed: The app should load quickly and provide news updates in real-time to ensure users can stay up-to-date with the latest developments.
Reliability: The app should be reliable, with minimal downtime or errors, to ensure users can access news updates when needed.
Scalability: The app should be able to handle increasing numbers of users and news stories without degrading performance or functionality.
Customization: The app should provide users with the ability to customize their news feeds based on their interests and preferences.
Navigation: The app should be easy to navigate, with clear and intuitive menus and interfaces that allow users to quickly access the news stories they want to read.
Responsiveness: The app should be responsive to user feedback, with new features and improvements added regularly to enhance user experience.
Accessibility: The app should be accessible to users with disabilities, with features such as text-to-speech and voice commands to assist users with visual or physical impairments.
Compatibility: The app should be compatible with a wide range of mobile devices and operating systems to ensure broad accessibility to users.
Security: The app should provide adequate security measures, such as encryption and authentication, to protect user data and prevent unauthorized access or data breaches.
User feedback: The app should provide users with a mechanism to provide feedback on news stories and the app's functionality, allowing for continuous improvement.
Overall, the InShorts app must meet various performance requirements to ensure its functionality and usability, and to meet users' needs and expectations.
*/

/*
Design constraints are the limitations that affect the design and development of a software product. Here are some potential design constraints or functional requirements for the InShorts app:

Mobile device compatibility: The app must be designed to work on a wide range of mobile devices, including smartphones and tablets, running different operating systems such as iOS and Android.
Limited screen space: The app must be designed to deliver news summaries in a concise and easily readable format that can fit on the smaller screens of mobile devices.
Limited data usage: The app must be designed to minimize data usage to reduce costs and ensure that users can access news stories even with limited or slow internet connections.
Limited processing power: The app must be designed to run efficiently on mobile devices with limited processing power, such as older or lower-end devices.
Accessibility: The app must be designed to be accessible to users with visual or physical impairments, such as by providing text-to-speech and other assistive technologies.
User interface consistency: The app must have a consistent user interface across different screens and devices to ensure ease of use and avoid confusion for users.
Data privacy: The app must be designed with strong security measures to protect user data and privacy, such as by encrypting user data and implementing secure login and authentication procedures.
Content moderation: The app must be designed with mechanisms to ensure that the news stories presented to users are accurate, fair, and appropriate for a general audience.
Third-party integration: The app may need to integrate with third-party services such as social media, advertising platforms, or analytics tools, which may have their own design constraints and requirements.
Multilingual support: The app may need to support multiple languages to serve a diverse user base, which may impose additional design constraints on the user interface and data storage.
Overall, the InShorts app must be designed to meet various constraints and requirements, while still delivering a high-quality user experience and meeting users' needs for quick and easy access to the latest news updates.
*/

/*
Hardware requirements for the InShorts app may include:

Mobile devices: The app must be designed to work on a range of mobile devices, including smartphones and tablets, running different operating systems such as iOS and Android.
Screen size: The app must be designed to fit the smaller screens of mobile devices and provide an easily readable format for news summaries.
Processing power: The app must be designed to run efficiently on mobile devices with varying processing power, including older or lower-end devices.
Battery life: The app must be designed to minimize battery consumption to ensure that users can use the app for extended periods without significant impact on battery life.
Camera: The app may need to access the device's camera for features such as user profile pictures or augmented reality news stories.
GPS: The app may need to access the device's GPS for location-based features such as weather updates or local news stories.
Overall, the hardware requirements for the InShorts app must be designed to support the app's functionality and provide a seamless user experience on a variety of mobile devices.
*/

/*
Software requirements for the InShorts app may include:

Operating systems: The app must be designed to run on a range of operating systems, including iOS and Android.
Development frameworks: The app may be built using development frameworks such as React Native or Flutter, which enable cross-platform app development.
APIs: The app may use APIs to access third-party news sources, social media platforms, or other services such as push notifications or analytics.
Content management system: The app may use a content management system to manage and update news content, user profiles, or other app data.
Database: The app may use a database to store user data such as login credentials, user preferences, or browsing history.
Libraries: The app may use third-party libraries for features such as image or video processing, data visualization, or user interface design.
Code repositories: The app may use code repositories such as GitHub or Bitbucket for version control and collaboration among developers.
Development tools: The app may use various development tools such as integrated development environments (IDEs), debuggers, or performance testing tools to facilitate app development and testing.
Overall, the software requirements for the InShorts app must be carefully designed and integrated to ensure that the app functions smoothly and provides a high-quality user experience.




*/

/*
Other functional requirements for the InShorts app may include:

User registration and authentication: Users should be able to create an account and login with their credentials, and the app should ensure that user data is secure and protected.
News feed: The app should provide an accurate and up-to-date news feed that can be customized to users' interests and preferences, and should present news summaries in a clear, concise, and readable format.
Search functionality: The app should allow users to search for specific news topics or keywords, and should provide relevant and accurate search results.
User profiles: The app should allow users to create and edit their profiles, including profile pictures, personal information, and news preferences.
Social sharing: The app should allow users to share news stories on social media platforms such as Facebook, Twitter, or LinkedIn.
Push notifications: The app should provide push notifications for breaking news or other important updates, and allow users to manage their notification preferences.
User feedback: The app should allow users to provide feedback on news stories, the app's functionality, and other features, and should incorporate user feedback into future updates and improvements.
Advertising: The app may include advertising or sponsored content, and should ensure that ads are relevant and unobtrusive, and do not interfere with the app's functionality or user experience.
*/

/*
Security is a critical non-functional requirement for the InShorts app, as it involves the protection of user data and privacy. Some key security requirements for the app may include:

Authentication and authorization: The app must ensure that user accounts are secure and protected, and that only authorized users have access to their accounts and personal information.
Data protection: The app must ensure that user data, including login credentials, browsing history, and preferences, are stored securely and protected against unauthorized access or data breaches.
Encryption: The app must use encryption technology to protect sensitive data such as login credentials, and ensure that data transmissions are secure and encrypted.
Compliance: The app must comply with relevant data protection and privacy regulations, such as the General Data Protection Regulation (GDPR) or the California Consumer Privacy Act (CCPA), and ensure that user data is collected and processed lawfully and ethically.
Security testing: The app must undergo regular security testing and vulnerability assessments to identify and address potential security issues, and ensure that the app remains secure and protected against cyber threats.
Incident response: The app must have a robust incident response plan in place to address security incidents or breaches, and ensure that users are notified promptly and transparently in the event of a security incident.
User education: The app should provide users with information and guidance on best practices for protecting their personal information and privacy, and should encourage users to take appropriate measures to safeguard their data.
*/

/*
Reliability is an important non-functional requirement for the InShorts app, as users rely on the app to provide them with accurate and up-to-date news summaries. Some key reliability requirements for the app may include:

Availability: The app must be available and accessible to users at all times, with minimal downtime or service disruptions.
Stability: The app must be stable and reliable, with minimal crashes or errors, and should recover quickly from any technical issues or failures.
Accuracy: The app must provide accurate and reliable news summaries, and should ensure that all news stories are verified and fact-checked before publication.
Performance: The app should be responsive and fast, with minimal lag or delay, and should provide a seamless and smooth user experience.
Scalability: The app should be able to handle large volumes of traffic and users, and should be able to scale up or down as needed to accommodate changing user demand.
Backup and recovery: The app should have a robust backup and recovery system in place to ensure that user data and information is not lost in the event of a system failure or outage.
Testing and validation: The app must undergo regular testing and validation to ensure that it meets reliability requirements and user expectations, and should incorporate user feedback and suggestions into future updates and improvements.



*/

/*
Maintainability is an important non-functional requirement for the InShorts app, as it ensures that the app can be easily maintained, updated, and modified over time. Some key maintainability requirements for the app may include:

Modularity: The app should be designed with a modular architecture, with separate components and modules that can be easily modified or replaced without affecting the overall system.
Documentation: The app should be well-documented, with clear and comprehensive documentation that outlines the system architecture, functionality, and dependencies, as well as any technical or design considerations.
Code quality: The app should have high-quality, well-structured code that is easy to read, understand, and modify, and should adhere to coding standards and best practices.
Version control: The app should use version control tools, such as Git or SVN, to manage code changes and track code versions, and should ensure that code changes are reviewed and approved before being implemented.
Testability: The app should be designed with testability in mind, with a robust testing framework and automated testing tools that can be used to test and validate new features and changes.
Scalability: The app should be designed with scalability in mind, with a flexible and scalable architecture that can accommodate future growth and expansion.
Continuous improvement: The app should be continuously improved and updated, with new features and functionality added over time to meet changing user needs and expectations.



*/





/*
Supportability is an important non-functional requirement for the InShorts app, as it ensures that the app can be easily supported and maintained by its developers, administrators, and end-users. Some key supportability requirements for the app may include:

User support: The app should provide users with easy access to support resources, such as FAQs, tutorials, and customer support, to help them resolve any issues or problems they may encounter while using the app.
Monitoring and alerts: The app should have monitoring tools in place to detect and alert administrators to any performance or security issues, and should have appropriate procedures in place to address these issues in a timely and effective manner.
Logging and auditing: The app should have logging and auditing tools in place to track user activity and system events, and should be able to provide administrators with detailed logs and reports to help diagnose and troubleshoot issues.
Compatibility: The app should be compatible with a wide range of devices, operating systems, and web browsers, to ensure that it can be easily accessed and used by a broad user base.
Maintenance and updates: The app should be designed with easy maintenance and updates in mind, with clear documentation, version control, and release management processes in place to ensure that updates can be easily deployed and tested.
Backup and recovery: The app should have a robust backup and recovery strategy in place to ensure that user data and information is not lost in the event of a system failure or outage.
Training and knowledge transfer: The app should be designed with training and knowledge transfer in mind, to ensure that new developers, administrators, and end-users can quickly learn how to use and maintain the app.
*/




/*sequence diagram

User -> App: Opens InShorts app
App -> Database: Requests news articles
Database -> App: Returns news articles
App -> User: Displays news articles
User -> App: Clicks on an article
App -> API: Requests full article content
API -> App: Returns full article content
App -> User: Displays full article content


*/


/*state diagram
                +-------+
                | Start |
                +-------+
                    |
                    |
                    v
            +---------------+
            | Displaying    |
            | news articles |
            +---------------+
                    |
                    |
                    v
            +---------------+
            | Displaying    |
            | full article  |
            +---------------+

*/


/*

level 0


       +---------+                   +---------+
       |  User   |                   |  System |
       |Interface|                   |         |
       +----+----+                   +----+----+
            |                              |
            |          Request news        |
            +----------------------------->+
            |                              |
            |       News article list      |
            +<-----------------------------+
            |                              |
            |   Select news article to     |
            |    read full article        |
            +----------------------------->+
            |                              |
            |       Full news article      |
            +<-----------------------------+


level 1

       +---------+          +-----------+           +------------------+
       |  User   |          |   News    |           |  Database        |
       |Interface+<-------->+Retrieval  +<----------+                  |
       +----+----+          +-----------+           +----+-------------+
            |                                          |
            |        Retrieve news article list         |
            +----------------------------------------->+
            |                                          |
            |        Retrieve full news article         |
            +----------------------------------------->+
            |                                          |
            |    Retrieve news article from database    |
            +----------------------------------------->+
            |                                          |
            |      Update news article in database      |
            +<-----------------------------------------+


level 2

       +---------+          +-----------+           +-----------------+
       |  User   |          |   News    |           |  Database       |
       |Interface+<-------->+Retrieval  +<----------+                 |
       +----+----+          +-----------+           +----+------------+
            |                                          |
            |          Retrieve news article list       |
            |                                          |
            +----------------------------------------->+
            |                                          |
            |    Retrieve news articles from API        |
            |                                          |
            +----------------------------------------->+
            |                                          |
            |      Update news articles in cache        |
            |                                          |
            +----------------------------------------->+
            |                                          |
            |    Return news article list to user       |
            |                                          |
            +<-----------------------------------------+
            |                                          |
            |        Retrieve full news article         |
            |                                          |
            +----------------------------------------->+
            |                                          |
            |   Retrieve news article from cache/db     |
            |                                          |
            +----------------------------------------->+
            |                                          |
            |     Return full news article to user      |
            |                                          |
            +<-----------------------------------------+
            |                                          |
            |  Retrieve news article from database      |
            |                                          |
            +----------------------------------------->+
            |                                          |
            |  Return news article from database to app |
            |                                          |
            +<-----------------------------------------+
            |                                          |
            |    Update news article in database        |
            |                                          |
            +----------------------------------------->+


*/
