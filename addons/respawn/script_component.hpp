#define COMPONENT respawn
#include "\z\potato\addons\core\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_RESPAWN
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_RESPAWN
    #define DEBUG_SETTINGS DEBUG_SETTINGS_RESPAWN
#endif

#define MAIN_DISPLAY (findDisplay 46)

#define ADMIN_RESPAWN_IDD 800000
#define ADMIN_RESPAWN (findDisplay ADMIN_RESPAWN_IDD)

#define ADMIN_BG_IDC 800001
#define ADMIN_BG (ADMIN_RESPAWN displayCtrl ADMIN_BG_IDC)

#define ADMIN_BGF_IDC 800002
#define ADMIN_BGF (ADMIN_RESPAWN displayCtrl ADMIN_BGF_IDC)

#define ADMIN_SPEC_BG_IDC 800003
#define ADMIN_SPEC_BG (ADMIN_RESPAWN displayCtrl ADMIN_SPEC_BG_IDC)

#define ADMIN_SPEC_FRAME_IDC 800004
#define ADMIN_SPEC_FRAME (ADMIN_RESPAWN displayCtrl ADMIN_SPEC_FRAME_IDC)

#define ADMIN_GROUP_FRAME_IDC 800005
#define ADMIN_GROUP_FRAME (ADMIN_RESPAWN displayCtrl ADMIN_GROUP_FRAME_IDC)

#define ADMIN_CONFIG_FRAME_IDC 800007
#define ADMIN_CONFIG_FRAME (ADMIN_RESPAWN displayCtrl ADMIN_CONFIG_FRAME_IDC)

#define ADMIN_SPEC_LIST_IDC 800008
#define ADMIN_SPEC_LIST (ADMIN_RESPAWN displayCtrl ADMIN_SPEC_LIST_IDC)

#define ADMIN_GROUP_TREE_IDC 800009
#define ADMIN_GROUP_TREE (ADMIN_RESPAWN displayCtrl ADMIN_GROUP_TREE_IDC)

#define ADMIN_FACTION_TEXT_IDC 800010
#define ADMIN_FACTION_TEXT (ADMIN_RESPAWN displayCtrl ADMIN_FACTION_TEXT_IDC)

#define ADMIN_FACTION_COMBO_IDC 800011
#define ADMIN_FACTION_COMBO (ADMIN_RESPAWN displayCtrl ADMIN_FACTION_COMBO_IDC)

#define ADMIN_GROUP_TEXT_IDC 800012
#define ADMIN_GROUP_TEXT (ADMIN_RESPAWN displayCtrl ADMIN_GROUP_TEXT_IDC)

#define ADMIN_GROUP_COMBO_IDC 800013
#define ADMIN_GROUP_COMBO (ADMIN_RESPAWN displayCtrl ADMIN_GROUP_COMBO_IDC)

#define ADMIN_CONFIG_TEXT_IDC 800014
#define ADMIN_CONFIG_TEXT (ADMIN_RESPAWN displayCtrl ADMIN_CONFIG_TEXT_IDC)

#define ADMIN_CONFIG_COMBO_IDC 800015
#define ADMIN_CONFIG_COMBO (ADMIN_RESPAWN displayCtrl ADMIN_CONFIG_COMBO_IDC)

#define ADMIN_ADD_BUTTON_IDC 800016
#define ADMIN_ADD_BUTTON (ADMIN_RESPAWN displayCtrl ADMIN_ADD_BUTTON_IDC)

#define ADMIN_SLOT_BUTTON_IDC 800017
#define ADMIN_SLOT_BUTTON (ADMIN_RESPAWN displayCtrl ADMIN_SLOT_BUTTON_IDC)

#define ADMIN_DELETE_BUTTON_IDC 800018
#define ADMIN_DELETE_BUTTON (ADMIN_RESPAWN displayCtrl ADMIN_DELETE_BUTTON_IDC)

#define ADMIN_OPEN_BUTTON_IDC 800019
#define ADMIN_OPEN_BUTTON (ADMIN_RESPAWN displayCtrl ADMIN_OPEN_BUTTON_IDC)

#define ADMIN_TRIGGER_BUTTON_IDC 800020
#define ADMIN_TRIGGER_BUTTON (ADMIN_RESPAWN displayCtrl ADMIN_TRIGGER_BUTTON_IDC)

#define ADMIN_CANCEL_BUTTON_IDC 800021
#define ADMIN_CANCEL_BUTTON (ADMIN_RESPAWN displayCtrl ADMIN_CANCEL_BUTTON_IDC)

#define ADMIN_CHAT_BUTTON_IDC 800022
#define ADMIN_CHAT_BUTTON (ADMIN_RESPAWN displayCtrl ADMIN_CHAT_BUTTON_IDC)

#define ADMIN_CLOSE_BUTTON_IDC 800023
#define ADMIN_CLOSE_BUTTON (ADMIN_RESPAWN displayCtrl ADMIN_CLOSE_BUTTON_IDC)

#define ADMIN_MAP_IDC 800024
#define ADMIN_MAP (ADMIN_RESPAWN displayCtrl ADMIN_MAP_IDC)

#include "\z\potato\addons\core\script_macros.hpp"
