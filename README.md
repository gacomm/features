# Features
place to store various features we create.

For more information and to download the Features module go to https://www.drupal.org/project/features

Features are easy!  Simply copy the modules you want from the features folder to your individual site's module folder (/sites/all/modules) and enable the module through drush or through the GUI.

I find it easier to change the default location of features from (sites/all/modules) to (sites/all/modules/features) so it is clear that the module is not a contrib module, it is a feature module.  This can be done in the Features settings. 

Please do not replace the modules in the features repository unless you are sure you are making an improvement that everyone who downloads the feature would find useful.  The features in the Features repository should be as broad as possible and you should customize them to suit your needs in your individual Drupal site.

<h2>Glossary</h2>

<strong>feature</strong> - a module generated by Features, which stores configuration of other modules, e.g. a content type or a View, in code.<br/>
<strong>Default</strong> - if a feature is described as 'default', it means that the code that is running is that stored in your feature. The code is not stored in the database.<br/>
<strong>Overridden</strong> - a feature is overridden when a user uses the UI to make configuration changes. These changes are stored in the database, and override what is stored in code.<br/>
<strong>Disabled</strong> - a feature is a module, and therefore must be enabled before it can be used. Otherwise, it is disabled.<br/>
<strong>Revert</strong>- if a feature has been overridden, it can be reverted. This means that the version in the database is destroyed and the version defined in code, in your feature, is used.<br/>
<strong>Update/Recreate</strong> - updating an overridden feature will ensure that the version of the feature defined in code is made to match the version stored in the database.
