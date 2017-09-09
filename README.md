# Fast Web App
Demostration for how to create a web app using Drupal. Steps are provided in README file.

## Purpose
This project is to each users how to build a Drupal-based web application without writing any code. This is beneficial 
for developers that do not have time to code a custom application from scratch or for someone who wants to build custom 
software, but does not have programming knowledge.

## Database Configuration and Site Setup 
* Navigate to the URL of your website.
* Select the Standard installation profile
* Select the language.
* Enter database credentials. *NOTE: If you already have a settings.php file in place in the sites/default directory, you will not be prompted for these credentials.*
* The installer will run. Once completed, enter the details about the website. These details can be updated at a later time.
*The account details that are entered, are for the website's admin user.*
* Once setup is complete, you'll be directed to the websites home page.

## Adding and Removing Modules
1) In the toolbar, click *Modules*
2) Uncheck (disable) the following modules
* Comment
* Dashboard
* Database Logging
* Overlay
* Shortcut
3) Check (enable) the following modules
* Ctools
* Services
* REST Server
Click Save
4) If you receive a prompt about enabling additional modules, click "Continue".

## Create a new Page 
1) In the Navigation block, click *Add content* > *Basic page*
2) Enter a title and some content for the page. Then click Save at the bottom.
3) Your new page will be active. 

## Change to Mobile Friendly Theme
1) Click *Appearance* in the toolbar
2) Click *Enable and set default* under the *Mayo* theme
3) Then the page should refresh with the new theme.
4) Click *Disable* under the *Bartik* and *Seven* theme
5) At the bottom of the page in the *Administration Theme* sectoin, change the *Administration Theme* to *Default theme*.
6) Click *Save Configuration*

## Change Page Layout
1) Click *Structure* in the toolbar
2) Click *Blocks* 
3) Re-order the blocks to your choosing.
4) Click *Save blocks* at the bottom of the page.

## Create REST API
1) Click *Structure* in the toolbar
2) Click *Services*
3) Click *Add*
4) Enter the name for the server. The name is only visible to site admins. In the Server field, select *REST*. Enter the path to the service. *Path to endpoint* will be publicly visible in the URL.
5) Click *Save*

## Edit REST API
1) Next to the service, click *Edit Resources*
2) Select the resources that you want to be accesible from the API.
3) Click *Save*

## Testing the REST API
1) Open tool that can submit REST requests (e.g. Poster)
2) Enter the URL http://*domain*/api/node.json. Replace *domain* with the base URL to your website.
3) Send the GET request. 
4) Response similar to the below should be received
```json
[{"nid":"1","vid":"1","type":"page","language":"und","title":"first page","uid":"1","status":"1","created":"1504968410","changed":"1504968410","comment":"0","promote":"0","sticky":"0","tnid":"0","translate":"0","uri":"http://domain/api/node/1"}]
```

