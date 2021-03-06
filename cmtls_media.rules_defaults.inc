<?php
/**
 * @file
 * cmtls_media.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function cmtls_media_default_rules_configuration() {
  $items = array();
  $items['rules_cmtls_media_app_notifications'] = entity_import('rules_config', '{ "rules_cmtls_media_app_notifications" : {
      "LABEL" : "CT Media app notifications",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "cmtls" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "media_gallery" : "media_gallery" } }
          }
        }
      ],
      "DO" : [
        { "flag_fetch_users_node" : {
            "USING" : {
              "flag" : "cmtls_app_follow",
              "node" : [ "node:field-cmtls-application:0" ]
            },
            "PROVIDE" : { "users" : { "users" : "Users who flagged" } }
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "node:field-cmtls-application:0:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "users" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "mail" : {
                  "to" : "\\u0022[list-item:field-cmtls-firstname] [list-item:field-cmtls-lastname]\\u0022 \\u003C[list-item:mail]\\u003E",
                  "subject" : "[site:name] has new content: \\u0022[node:title]\\u0022",
                  "message" : "Hello [list-item:field-cmtls-firstname],\\r\\n\\r\\n[site:name] has new media \\u0022[node:title]\\u0022:\\r\\n\\r\\n[node:media-gallery-description]\\r\\n\\r\\n[node:url]\\r\\n---\\r\\nYou can change notification settings for \\u0022[entity-fetched:title]\\u0022 at [entity-fetched:url].",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_cmtls_media_follow_own_thread'] = entity_import('rules_config', '{ "rules_cmtls_media_follow_own_thread" : {
      "LABEL" : "CT Media follow own thread",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "cmtls" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "media_gallery" : "media_gallery" } }
          }
        }
      ],
      "DO" : [
        { "flag_flagnode" : {
            "flag" : "media_gallery_follow",
            "node" : [ "node" ],
            "flagging_user" : [ "node:author" ],
            "permission_check" : 1
          }
        }
      ]
    }
  }');
  $items['rules_cmtls_media_thread_notifications'] = entity_import('rules_config', '{ "rules_cmtls_media_thread_notifications" : {
      "LABEL" : "CT Media thread notifications",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "cmtls" ],
      "REQUIRES" : [ "rules", "flag", "comment" ],
      "ON" : [ "comment_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "comment:node" ],
            "type" : { "value" : { "media_gallery" : "media_gallery" } }
          }
        }
      ],
      "DO" : [
        { "flag_fetch_users_node" : {
            "USING" : { "flag" : "media_gallery_follow", "node" : [ "comment:node" ] },
            "PROVIDE" : { "users" : { "users" : "Users who flagged" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "users" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "mail" : {
                  "to" : "\\u0022[list-item:field-cmtls-firstname] [list-item:field-cmtls-lastname]\\u0022 \\u003C[list-item:mail]\\u003E",
                  "subject" : "[site:name] - [comment:author:field-cmtls-firstname] [comment:author:field-cmtls-lastname] has commented on: [comment:node]",
                  "message" : "[comment:author:field-cmtls-firstname] [comment:author:field-cmtls-lastname] commented on \\u0022[comment:node]\\u0022\\r\\n\\r\\n[comment:body]\\r\\n\\r\\n[comment:url]\\r\\n---\\r\\nYou can change notification settings for \\u0022[comment:node]\\u0022 at [comment:node:url].",
                  "language" : [ "" ]
                }
              }
            ]
          }
        },
        { "flag_flagnode" : {
            "flag" : "media_gallery_follow",
            "node" : [ "comment:node" ],
            "flagging_user" : [ "comment:author" ],
            "permission_check" : 1
          }
        }
      ]
    }
  }');
  $items['rules_cmtls_media_views_cache'] = entity_import('rules_config', '{ "rules_cmtls_media_views_cache" : {
      "LABEL" : "CT Media views cache",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "cmtls" ],
      "REQUIRES" : [ "rules", "cache_actions" ],
      "ON" : [ "node_insert", "node_update", "node_delete" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "media_gallery" : "media_gallery" } }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : {
                "cmtls_group_content" : "cmtls_group_content",
                "cmtls_media" : "cmtls_media"
              }
            }
          }
        }
      ]
    }
  }');
  return $items;
}
