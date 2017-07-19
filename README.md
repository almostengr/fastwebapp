# fastwebapp
Demostration for how to create a web app using Drupal. Steps are provided in README file.

# Purpose
This project is to each users how to build a Drupal-based web application without writing any code. This is beneficial 
for developers that do not have time to code a custom application from scratch or for someone who wants to build custom 
software, but does not have programming knowledge.

# Database Configuration and Site Setup 
* Navigate to the URL of your website.
* Select the Standard installation profile
* Select the language.
* Enter database credentials. *NOTE: If you already have a settings.php file in place in the sites/default directory, you will not be prompted for these credentials.*
* The installer will run. Once completed, enter the details about the website. These details can be updated at a later time.
*The account details that are entered, are for the website's admin user.*
* Once setup is complete, you'll be directed to the websites home page.

# Adding and Removing Modules
1) in the toolbar, click *Modules*
2) Uncheck (disable) the following modules
* Comment
* Dashboard
* Database Logging
* List
* Number
* Overlay
* Shortcut
Click Save
3) Check (enable) the following modules
* Ctools
* Services
* REST Server
Click Save
4) If you receive a prompt about enabling additional modules, click "Continue".

# Create a new Page 
1) In the Navigation block, click *Add content* > *Basic page*
2) Enter a title and some content for the page. Then click Save at the bottom.
3) Your new page will be active. 

# Change to Mobile Friendly Theme
1) Click *Appearance* in the toolbar
2) Click *Enable and set default* under the *Mayo* theme
3) Then the page should refresh with the new theme.

