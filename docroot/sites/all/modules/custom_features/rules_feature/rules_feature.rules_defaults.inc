<?php
/**
 * @file
 * rules_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rules_feature_default_rules_configuration() {
  $items = array();
  $items['rules_rule01'] = entity_import('rules_config', '{ "rules_rule01" : {
      "LABEL" : "Rule01",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "general" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_view--webform" : { "bundle" : "webform" } },
      "DO" : [
        { "drupal_message" : { "message" : "Webform content type is present on this page" } }
      ]
    }
  }');
  return $items;
}
