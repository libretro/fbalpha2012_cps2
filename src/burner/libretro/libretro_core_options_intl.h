#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

/*
 ********************************
 * VERSION: 2.0
 ********************************
 *
 * - 2.0: Add support for core options v2 interface
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/
/* RETRO_LANGUAGE_AR */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_AR NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_AR NULL
#define FBA2012CPS2_HISCORES_LABEL_AR NULL
#define FBA2012CPS2_HISCORES_INFO_0_AR NULL
#define FBA2012CPS2_CONTROLS_LABEL_AR NULL
#define FBA2012CPS2_CONTROLS_INFO_0_AR NULL
#define OPTION_VAL_GAMEPAD_AR NULL
#define OPTION_VAL_ARCADE_AR NULL
#define FBA2012CPS2_ASPECT_LABEL_AR NULL
#define FBA2012CPS2_ASPECT_INFO_0_AR NULL
#define OPTION_VAL_DAR_AR NULL
#define OPTION_VAL_PAR_AR NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_AR NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_AR NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_AR NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_AR NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_AR NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_AR NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_AR NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_AR NULL
#define OPTION_VAL_AUTO_AR NULL
#define OPTION_VAL_MANUAL_AR NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_AR NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_AR NULL

struct retro_core_option_v2_category option_cats_ar[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ar[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_AR,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_AR,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_AR,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_AR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_AR,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_AR,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_AR },
         { "arcade",  OPTION_VAL_ARCADE_AR },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_AR,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_AR,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_AR },
         { "PAR", OPTION_VAL_PAR_AR },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_AR,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_AR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_AR,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_AR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_AR,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_AR,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_AR,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_AR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_AR },
         { "manual",   OPTION_VAL_MANUAL_AR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_AR,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_AR,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ar = {
   option_cats_ar,
   option_defs_ar
};

/* RETRO_LANGUAGE_AST */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_AST NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_AST NULL
#define FBA2012CPS2_HISCORES_LABEL_AST NULL
#define FBA2012CPS2_HISCORES_INFO_0_AST NULL
#define FBA2012CPS2_CONTROLS_LABEL_AST NULL
#define FBA2012CPS2_CONTROLS_INFO_0_AST NULL
#define OPTION_VAL_GAMEPAD_AST NULL
#define OPTION_VAL_ARCADE_AST NULL
#define FBA2012CPS2_ASPECT_LABEL_AST NULL
#define FBA2012CPS2_ASPECT_INFO_0_AST NULL
#define OPTION_VAL_DAR_AST NULL
#define OPTION_VAL_PAR_AST NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_AST NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_AST NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_AST NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_AST NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_AST NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_AST NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_AST NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_AST NULL
#define OPTION_VAL_AUTO_AST NULL
#define OPTION_VAL_MANUAL_AST NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_AST NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_AST NULL

struct retro_core_option_v2_category option_cats_ast[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ast[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_AST,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_AST,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_AST,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_AST,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_AST,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_AST,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_AST },
         { "arcade",  OPTION_VAL_ARCADE_AST },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_AST,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_AST,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_AST },
         { "PAR", OPTION_VAL_PAR_AST },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_AST,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_AST,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_AST,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_AST,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_AST,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_AST,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_AST,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_AST,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_AST },
         { "manual",   OPTION_VAL_MANUAL_AST },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_AST,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_AST,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ast = {
   option_cats_ast,
   option_defs_ast
};

/* RETRO_LANGUAGE_CA */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_CA NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_CA NULL
#define FBA2012CPS2_HISCORES_LABEL_CA NULL
#define FBA2012CPS2_HISCORES_INFO_0_CA NULL
#define FBA2012CPS2_CONTROLS_LABEL_CA NULL
#define FBA2012CPS2_CONTROLS_INFO_0_CA NULL
#define OPTION_VAL_GAMEPAD_CA NULL
#define OPTION_VAL_ARCADE_CA NULL
#define FBA2012CPS2_ASPECT_LABEL_CA NULL
#define FBA2012CPS2_ASPECT_INFO_0_CA NULL
#define OPTION_VAL_DAR_CA NULL
#define OPTION_VAL_PAR_CA NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_CA NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_CA NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_CA NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_CA NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_CA NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_CA NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_CA NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_CA NULL
#define OPTION_VAL_AUTO_CA NULL
#define OPTION_VAL_MANUAL_CA NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_CA NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_CA NULL

struct retro_core_option_v2_category option_cats_ca[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ca[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_CA,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_CA,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_CA,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_CA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_CA,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_CA,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_CA },
         { "arcade",  OPTION_VAL_ARCADE_CA },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_CA,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_CA,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_CA },
         { "PAR", OPTION_VAL_PAR_CA },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_CA,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_CA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_CA,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_CA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_CA,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_CA,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_CA,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_CA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_CA },
         { "manual",   OPTION_VAL_MANUAL_CA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_CA,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_CA,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ca = {
   option_cats_ca,
   option_defs_ca
};

/* RETRO_LANGUAGE_CHS */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_CHS NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_CHS NULL
#define FBA2012CPS2_HISCORES_LABEL_CHS NULL
#define FBA2012CPS2_HISCORES_INFO_0_CHS NULL
#define FBA2012CPS2_CONTROLS_LABEL_CHS NULL
#define FBA2012CPS2_CONTROLS_INFO_0_CHS NULL
#define OPTION_VAL_GAMEPAD_CHS NULL
#define OPTION_VAL_ARCADE_CHS NULL
#define FBA2012CPS2_ASPECT_LABEL_CHS NULL
#define FBA2012CPS2_ASPECT_INFO_0_CHS NULL
#define OPTION_VAL_DAR_CHS NULL
#define OPTION_VAL_PAR_CHS NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_CHS NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_CHS NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_CHS NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_CHS NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_CHS NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_CHS NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_CHS NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_CHS NULL
#define OPTION_VAL_AUTO_CHS NULL
#define OPTION_VAL_MANUAL_CHS NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_CHS NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_CHS NULL

struct retro_core_option_v2_category option_cats_chs[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_chs[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_CHS,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_CHS,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_CHS,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_CHS },
         { "arcade",  OPTION_VAL_ARCADE_CHS },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_CHS,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_CHS },
         { "PAR", OPTION_VAL_PAR_CHS },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_CHS,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_CHS,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_CHS,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_CHS,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_CHS },
         { "manual",   OPTION_VAL_MANUAL_CHS },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_CHS,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_chs = {
   option_cats_chs,
   option_defs_chs
};

/* RETRO_LANGUAGE_CHT */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_CHT NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_CHT NULL
#define FBA2012CPS2_HISCORES_LABEL_CHT NULL
#define FBA2012CPS2_HISCORES_INFO_0_CHT NULL
#define FBA2012CPS2_CONTROLS_LABEL_CHT NULL
#define FBA2012CPS2_CONTROLS_INFO_0_CHT NULL
#define OPTION_VAL_GAMEPAD_CHT NULL
#define OPTION_VAL_ARCADE_CHT NULL
#define FBA2012CPS2_ASPECT_LABEL_CHT NULL
#define FBA2012CPS2_ASPECT_INFO_0_CHT NULL
#define OPTION_VAL_DAR_CHT NULL
#define OPTION_VAL_PAR_CHT NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_CHT NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_CHT NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_CHT NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_CHT NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_CHT NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_CHT NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_CHT NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_CHT NULL
#define OPTION_VAL_AUTO_CHT NULL
#define OPTION_VAL_MANUAL_CHT NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_CHT NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_CHT NULL

struct retro_core_option_v2_category option_cats_cht[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cht[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_CHT,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_CHT,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_CHT,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_CHT },
         { "arcade",  OPTION_VAL_ARCADE_CHT },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_CHT,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_CHT },
         { "PAR", OPTION_VAL_PAR_CHT },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_CHT,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_CHT,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_CHT,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_CHT,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_CHT },
         { "manual",   OPTION_VAL_MANUAL_CHT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_CHT,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cht = {
   option_cats_cht,
   option_defs_cht
};

/* RETRO_LANGUAGE_CS */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_CS NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_CS NULL
#define FBA2012CPS2_HISCORES_LABEL_CS NULL
#define FBA2012CPS2_HISCORES_INFO_0_CS NULL
#define FBA2012CPS2_CONTROLS_LABEL_CS NULL
#define FBA2012CPS2_CONTROLS_INFO_0_CS NULL
#define OPTION_VAL_GAMEPAD_CS NULL
#define OPTION_VAL_ARCADE_CS NULL
#define FBA2012CPS2_ASPECT_LABEL_CS NULL
#define FBA2012CPS2_ASPECT_INFO_0_CS NULL
#define OPTION_VAL_DAR_CS NULL
#define OPTION_VAL_PAR_CS NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_CS NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_CS NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_CS NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_CS NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_CS NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_CS NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_CS NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_CS NULL
#define OPTION_VAL_AUTO_CS NULL
#define OPTION_VAL_MANUAL_CS NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_CS NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_CS NULL

struct retro_core_option_v2_category option_cats_cs[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cs[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_CS,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_CS,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_CS,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_CS,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_CS,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_CS,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_CS },
         { "arcade",  OPTION_VAL_ARCADE_CS },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_CS,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_CS,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_CS },
         { "PAR", OPTION_VAL_PAR_CS },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_CS,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_CS,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_CS,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_CS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_CS,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_CS,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_CS,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_CS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_CS },
         { "manual",   OPTION_VAL_MANUAL_CS },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_CS,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_CS,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cs = {
   option_cats_cs,
   option_defs_cs
};

/* RETRO_LANGUAGE_CY */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_CY NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_CY NULL
#define FBA2012CPS2_HISCORES_LABEL_CY NULL
#define FBA2012CPS2_HISCORES_INFO_0_CY NULL
#define FBA2012CPS2_CONTROLS_LABEL_CY NULL
#define FBA2012CPS2_CONTROLS_INFO_0_CY NULL
#define OPTION_VAL_GAMEPAD_CY NULL
#define OPTION_VAL_ARCADE_CY NULL
#define FBA2012CPS2_ASPECT_LABEL_CY NULL
#define FBA2012CPS2_ASPECT_INFO_0_CY NULL
#define OPTION_VAL_DAR_CY NULL
#define OPTION_VAL_PAR_CY NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_CY NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_CY NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_CY NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_CY NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_CY NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_CY NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_CY NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_CY NULL
#define OPTION_VAL_AUTO_CY NULL
#define OPTION_VAL_MANUAL_CY NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_CY NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_CY NULL

struct retro_core_option_v2_category option_cats_cy[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cy[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_CY,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_CY,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_CY,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_CY,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_CY,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_CY,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_CY },
         { "arcade",  OPTION_VAL_ARCADE_CY },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_CY,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_CY,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_CY },
         { "PAR", OPTION_VAL_PAR_CY },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_CY,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_CY,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_CY,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_CY,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_CY,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_CY,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_CY,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_CY,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_CY },
         { "manual",   OPTION_VAL_MANUAL_CY },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_CY,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_CY,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cy = {
   option_cats_cy,
   option_defs_cy
};

/* RETRO_LANGUAGE_DA */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_DA NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_DA NULL
#define FBA2012CPS2_HISCORES_LABEL_DA NULL
#define FBA2012CPS2_HISCORES_INFO_0_DA NULL
#define FBA2012CPS2_CONTROLS_LABEL_DA NULL
#define FBA2012CPS2_CONTROLS_INFO_0_DA NULL
#define OPTION_VAL_GAMEPAD_DA NULL
#define OPTION_VAL_ARCADE_DA NULL
#define FBA2012CPS2_ASPECT_LABEL_DA NULL
#define FBA2012CPS2_ASPECT_INFO_0_DA NULL
#define OPTION_VAL_DAR_DA NULL
#define OPTION_VAL_PAR_DA NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_DA NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_DA NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_DA NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_DA NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_DA NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_DA NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_DA NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_DA NULL
#define OPTION_VAL_AUTO_DA NULL
#define OPTION_VAL_MANUAL_DA NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_DA NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_DA NULL

struct retro_core_option_v2_category option_cats_da[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_da[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_DA,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_DA,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_DA,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_DA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_DA,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_DA,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_DA },
         { "arcade",  OPTION_VAL_ARCADE_DA },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_DA,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_DA,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_DA },
         { "PAR", OPTION_VAL_PAR_DA },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_DA,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_DA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_DA,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_DA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_DA,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_DA,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_DA,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_DA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_DA },
         { "manual",   OPTION_VAL_MANUAL_DA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_DA,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_DA,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_da = {
   option_cats_da,
   option_defs_da
};

/* RETRO_LANGUAGE_DE */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_DE NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_DE NULL
#define FBA2012CPS2_HISCORES_LABEL_DE NULL
#define FBA2012CPS2_HISCORES_INFO_0_DE NULL
#define FBA2012CPS2_CONTROLS_LABEL_DE NULL
#define FBA2012CPS2_CONTROLS_INFO_0_DE NULL
#define OPTION_VAL_GAMEPAD_DE NULL
#define OPTION_VAL_ARCADE_DE NULL
#define FBA2012CPS2_ASPECT_LABEL_DE NULL
#define FBA2012CPS2_ASPECT_INFO_0_DE NULL
#define OPTION_VAL_DAR_DE NULL
#define OPTION_VAL_PAR_DE NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_DE NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_DE NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_DE NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_DE NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_DE NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_DE NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_DE NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_DE NULL
#define OPTION_VAL_AUTO_DE NULL
#define OPTION_VAL_MANUAL_DE NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_DE NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_DE NULL

struct retro_core_option_v2_category option_cats_de[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_de[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_DE,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_DE,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_DE,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_DE,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_DE,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_DE,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_DE },
         { "arcade",  OPTION_VAL_ARCADE_DE },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_DE,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_DE,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_DE },
         { "PAR", OPTION_VAL_PAR_DE },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_DE,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_DE,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_DE,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_DE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_DE,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_DE,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_DE,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_DE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_DE },
         { "manual",   OPTION_VAL_MANUAL_DE },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_DE,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_DE,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_de = {
   option_cats_de,
   option_defs_de
};

/* RETRO_LANGUAGE_EL */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_EL NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_EL NULL
#define FBA2012CPS2_HISCORES_LABEL_EL NULL
#define FBA2012CPS2_HISCORES_INFO_0_EL NULL
#define FBA2012CPS2_CONTROLS_LABEL_EL NULL
#define FBA2012CPS2_CONTROLS_INFO_0_EL NULL
#define OPTION_VAL_GAMEPAD_EL NULL
#define OPTION_VAL_ARCADE_EL NULL
#define FBA2012CPS2_ASPECT_LABEL_EL NULL
#define FBA2012CPS2_ASPECT_INFO_0_EL NULL
#define OPTION_VAL_DAR_EL NULL
#define OPTION_VAL_PAR_EL NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_EL NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_EL NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_EL NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_EL NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_EL NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_EL NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_EL NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_EL NULL
#define OPTION_VAL_AUTO_EL NULL
#define OPTION_VAL_MANUAL_EL NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_EL NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_EL NULL

struct retro_core_option_v2_category option_cats_el[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_el[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_EL,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_EL,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_EL,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_EL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_EL,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_EL,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_EL },
         { "arcade",  OPTION_VAL_ARCADE_EL },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_EL,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_EL,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_EL },
         { "PAR", OPTION_VAL_PAR_EL },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_EL,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_EL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_EL,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_EL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_EL,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_EL,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_EL,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_EL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_EL },
         { "manual",   OPTION_VAL_MANUAL_EL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_EL,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_EL,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_el = {
   option_cats_el,
   option_defs_el
};

/* RETRO_LANGUAGE_EO */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_EO NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_EO NULL
#define FBA2012CPS2_HISCORES_LABEL_EO NULL
#define FBA2012CPS2_HISCORES_INFO_0_EO NULL
#define FBA2012CPS2_CONTROLS_LABEL_EO NULL
#define FBA2012CPS2_CONTROLS_INFO_0_EO NULL
#define OPTION_VAL_GAMEPAD_EO NULL
#define OPTION_VAL_ARCADE_EO NULL
#define FBA2012CPS2_ASPECT_LABEL_EO NULL
#define FBA2012CPS2_ASPECT_INFO_0_EO NULL
#define OPTION_VAL_DAR_EO NULL
#define OPTION_VAL_PAR_EO NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_EO NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_EO NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_EO NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_EO NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_EO NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_EO NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_EO NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_EO NULL
#define OPTION_VAL_AUTO_EO NULL
#define OPTION_VAL_MANUAL_EO NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_EO NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_EO NULL

struct retro_core_option_v2_category option_cats_eo[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_eo[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_EO,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_EO,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_EO,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_EO,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_EO,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_EO,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_EO },
         { "arcade",  OPTION_VAL_ARCADE_EO },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_EO,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_EO,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_EO },
         { "PAR", OPTION_VAL_PAR_EO },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_EO,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_EO,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_EO,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_EO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_EO,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_EO,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_EO,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_EO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_EO },
         { "manual",   OPTION_VAL_MANUAL_EO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_EO,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_EO,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_eo = {
   option_cats_eo,
   option_defs_eo
};

/* RETRO_LANGUAGE_ES */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_ES "Velocidad de la CPU (%)"
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_ES "Permite overclockear la CPU emulada. Puede reducir las ralentizaciones, pero podría provocar defectos visuales."
#define FBA2012CPS2_HISCORES_LABEL_ES "Tablas de puntuaciones"
#define FBA2012CPS2_HISCORES_INFO_0_ES "Permite guardar las tablas de las mejores puntuaciones en los juegos compatibles con esta función. Es necesario tener el archivo «hiscore.dat» en la carpeta system/fbalpha2012/."
#define FBA2012CPS2_CONTROLS_LABEL_ES "Controles"
#define FBA2012CPS2_CONTROLS_INFO_0_ES "Configura la asignación predeterminada de los mandos."
#define OPTION_VAL_GAMEPAD_ES "Mando"
#define OPTION_VAL_ARCADE_ES NULL
#define FBA2012CPS2_ASPECT_LABEL_ES "Relación de aspecto asignada por el núcleo"
#define FBA2012CPS2_ASPECT_INFO_0_ES "Selecciona la relación de aspecto preferida para el contenido. Este ajuste solo se aplicará cuando la relación de aspecto de RetroArch esté configurada como «Asignada por el núcleo»."
#define OPTION_VAL_DAR_ES NULL
#define OPTION_VAL_PAR_ES NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_ES "Rotar los juegos con una alineación vertical (es necesario reiniciar)"
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_ES "Rota automáticamente la imagen al ejecutar juegos con una alineación vertical. Al desactivar esta opción, la entrada de la cruceta se rotará para que coincida con las direcciones que aparezcan en pantalla."
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_ES "Filtro de audio"
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_ES "Utiliza un filtro de paso bajo de audio para suavizar las asperezas en el sonido de ciertos juegos arcade."
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_ES "Nivel del filtro de audio (%)"
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_ES "Especifica el corte de frecuencias en el filtro de paso bajo de audio. Un valor elevado aumentará la fuerza percibida del filtro porque se atenuará un rango mayor del espectro de frecuencias altas."
#define FBA2012CPS2_FRAMESKIP_LABEL_ES "Omisión de fotogramas"
#define FBA2012CPS2_FRAMESKIP_INFO_0_ES "Omite fotogramas para no saturar el búfer de audio (chasquidos en el sonido). Mejora el rendimiento a costa de perder fluidez visual. El valor Automática omite fotogramas según lo aconseje el front-end. El valor Manual utiliza el ajuste Umbral de omisión de fotogramas (%)."
#define OPTION_VAL_AUTO_ES "Automática"
#define OPTION_VAL_MANUAL_ES NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_ES "Umbral de omisión de fotogramas (%)"
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_ES "Cuando la omisión de fotogramas esté configurada como Manual, este ajuste especifica el umbral de ocupación del búfer de audio (en porcentaje) por el que se omitirán fotogramas si el valor es inferior. Un valor más elevado reduce el riesgo de chasquidos omitiendo fotogramas con una mayor frecuencia."

struct retro_core_option_v2_category option_cats_es[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_es[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_ES,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_ES,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_ES,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_ES,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_ES,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_ES,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_ES },
         { "arcade",  OPTION_VAL_ARCADE_ES },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_ES,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_ES,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_ES },
         { "PAR", OPTION_VAL_PAR_ES },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_ES,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_ES,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_ES,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_ES,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_ES,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_ES,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_ES,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_ES,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_ES },
         { "manual",   OPTION_VAL_MANUAL_ES },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_ES,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_ES,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_es = {
   option_cats_es,
   option_defs_es
};

/* RETRO_LANGUAGE_FA */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_FA NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_FA NULL
#define FBA2012CPS2_HISCORES_LABEL_FA NULL
#define FBA2012CPS2_HISCORES_INFO_0_FA NULL
#define FBA2012CPS2_CONTROLS_LABEL_FA NULL
#define FBA2012CPS2_CONTROLS_INFO_0_FA NULL
#define OPTION_VAL_GAMEPAD_FA NULL
#define OPTION_VAL_ARCADE_FA NULL
#define FBA2012CPS2_ASPECT_LABEL_FA NULL
#define FBA2012CPS2_ASPECT_INFO_0_FA NULL
#define OPTION_VAL_DAR_FA NULL
#define OPTION_VAL_PAR_FA NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_FA NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_FA NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_FA NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_FA NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_FA NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_FA NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_FA NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_FA NULL
#define OPTION_VAL_AUTO_FA NULL
#define OPTION_VAL_MANUAL_FA NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_FA NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_FA NULL

struct retro_core_option_v2_category option_cats_fa[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fa[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_FA,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_FA,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_FA,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_FA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_FA,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_FA,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_FA },
         { "arcade",  OPTION_VAL_ARCADE_FA },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_FA,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_FA,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_FA },
         { "PAR", OPTION_VAL_PAR_FA },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_FA,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_FA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_FA,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_FA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_FA,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_FA,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_FA,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_FA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_FA },
         { "manual",   OPTION_VAL_MANUAL_FA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_FA,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_FA,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fa = {
   option_cats_fa,
   option_defs_fa
};

/* RETRO_LANGUAGE_FI */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_FI NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_FI NULL
#define FBA2012CPS2_HISCORES_LABEL_FI NULL
#define FBA2012CPS2_HISCORES_INFO_0_FI NULL
#define FBA2012CPS2_CONTROLS_LABEL_FI NULL
#define FBA2012CPS2_CONTROLS_INFO_0_FI NULL
#define OPTION_VAL_GAMEPAD_FI NULL
#define OPTION_VAL_ARCADE_FI NULL
#define FBA2012CPS2_ASPECT_LABEL_FI NULL
#define FBA2012CPS2_ASPECT_INFO_0_FI NULL
#define OPTION_VAL_DAR_FI NULL
#define OPTION_VAL_PAR_FI NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_FI NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_FI NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_FI NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_FI NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_FI NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_FI NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_FI NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_FI NULL
#define OPTION_VAL_AUTO_FI NULL
#define OPTION_VAL_MANUAL_FI NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_FI NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_FI NULL

struct retro_core_option_v2_category option_cats_fi[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fi[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_FI,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_FI,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_FI,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_FI,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_FI,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_FI,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_FI },
         { "arcade",  OPTION_VAL_ARCADE_FI },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_FI,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_FI,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_FI },
         { "PAR", OPTION_VAL_PAR_FI },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_FI,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_FI,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_FI,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_FI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_FI,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_FI,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_FI,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_FI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_FI },
         { "manual",   OPTION_VAL_MANUAL_FI },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_FI,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_FI,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fi = {
   option_cats_fi,
   option_defs_fi
};

/* RETRO_LANGUAGE_FR */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_FR "Vitesse CPU (%)"
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_FR "Active l'overclocking du processeur émulé. Peut réduire le ralentissement, mais peut causer des problèmes."
#define FBA2012CPS2_HISCORES_LABEL_FR NULL
#define FBA2012CPS2_HISCORES_INFO_0_FR NULL
#define FBA2012CPS2_CONTROLS_LABEL_FR "Les contrôles"
#define FBA2012CPS2_CONTROLS_INFO_0_FR "Définir le mappage par défaut des manettes."
#define OPTION_VAL_GAMEPAD_FR NULL
#define OPTION_VAL_ARCADE_FR NULL
#define FBA2012CPS2_ASPECT_LABEL_FR NULL
#define FBA2012CPS2_ASPECT_INFO_0_FR NULL
#define OPTION_VAL_DAR_FR NULL
#define OPTION_VAL_PAR_FR NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_FR NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_FR NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_FR NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_FR NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_FR NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_FR NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_FR NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_FR "Sauter des images pour éviter que le tampon audio ne soit sous-exécuté (crépitements). Améliore les performances au détriment de la fluidité visuelle. 'Auto' saute des images lorsque le frontend le conseille. 'Manuel' utilise le paramètre 'Seuil de saut d'images (%)'."
#define OPTION_VAL_AUTO_FR NULL
#define OPTION_VAL_MANUAL_FR NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_FR NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_FR "Lorsque 'Saut d'images' est réglé sur 'Manuel', spécifie le seuil d'occupation du tampon audio (pourcentage) en dessous duquel des images seront sautées. Des valeurs plus élevées réduisent le risque de crépitements en faisant sauter des images plus fréquemment."

struct retro_core_option_v2_category option_cats_fr[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fr[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_FR,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_FR,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_FR,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_FR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_FR,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_FR,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_FR },
         { "arcade",  OPTION_VAL_ARCADE_FR },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_FR,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_FR,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_FR },
         { "PAR", OPTION_VAL_PAR_FR },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_FR,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_FR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_FR,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_FR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_FR,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_FR,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_FR,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_FR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_FR },
         { "manual",   OPTION_VAL_MANUAL_FR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_FR,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_FR,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fr = {
   option_cats_fr,
   option_defs_fr
};

/* RETRO_LANGUAGE_GL */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_GL NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_GL NULL
#define FBA2012CPS2_HISCORES_LABEL_GL NULL
#define FBA2012CPS2_HISCORES_INFO_0_GL NULL
#define FBA2012CPS2_CONTROLS_LABEL_GL NULL
#define FBA2012CPS2_CONTROLS_INFO_0_GL NULL
#define OPTION_VAL_GAMEPAD_GL NULL
#define OPTION_VAL_ARCADE_GL NULL
#define FBA2012CPS2_ASPECT_LABEL_GL NULL
#define FBA2012CPS2_ASPECT_INFO_0_GL NULL
#define OPTION_VAL_DAR_GL NULL
#define OPTION_VAL_PAR_GL NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_GL NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_GL NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_GL NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_GL NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_GL NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_GL NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_GL NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_GL NULL
#define OPTION_VAL_AUTO_GL NULL
#define OPTION_VAL_MANUAL_GL NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_GL NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_GL NULL

struct retro_core_option_v2_category option_cats_gl[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_gl[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_GL,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_GL,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_GL,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_GL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_GL,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_GL,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_GL },
         { "arcade",  OPTION_VAL_ARCADE_GL },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_GL,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_GL,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_GL },
         { "PAR", OPTION_VAL_PAR_GL },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_GL,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_GL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_GL,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_GL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_GL,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_GL,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_GL,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_GL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_GL },
         { "manual",   OPTION_VAL_MANUAL_GL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_GL,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_GL,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_gl = {
   option_cats_gl,
   option_defs_gl
};

/* RETRO_LANGUAGE_HE */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_HE NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_HE NULL
#define FBA2012CPS2_HISCORES_LABEL_HE NULL
#define FBA2012CPS2_HISCORES_INFO_0_HE NULL
#define FBA2012CPS2_CONTROLS_LABEL_HE NULL
#define FBA2012CPS2_CONTROLS_INFO_0_HE NULL
#define OPTION_VAL_GAMEPAD_HE NULL
#define OPTION_VAL_ARCADE_HE NULL
#define FBA2012CPS2_ASPECT_LABEL_HE NULL
#define FBA2012CPS2_ASPECT_INFO_0_HE NULL
#define OPTION_VAL_DAR_HE NULL
#define OPTION_VAL_PAR_HE NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_HE NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_HE NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_HE NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_HE NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_HE NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_HE NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_HE NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_HE NULL
#define OPTION_VAL_AUTO_HE NULL
#define OPTION_VAL_MANUAL_HE NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_HE NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_HE NULL

struct retro_core_option_v2_category option_cats_he[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_he[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_HE,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_HE,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_HE,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_HE,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_HE,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_HE,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_HE },
         { "arcade",  OPTION_VAL_ARCADE_HE },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_HE,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_HE,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_HE },
         { "PAR", OPTION_VAL_PAR_HE },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_HE,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_HE,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_HE,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_HE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_HE,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_HE,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_HE,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_HE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_HE },
         { "manual",   OPTION_VAL_MANUAL_HE },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_HE,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_HE,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_he = {
   option_cats_he,
   option_defs_he
};

/* RETRO_LANGUAGE_HU */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_HU NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_HU NULL
#define FBA2012CPS2_HISCORES_LABEL_HU NULL
#define FBA2012CPS2_HISCORES_INFO_0_HU NULL
#define FBA2012CPS2_CONTROLS_LABEL_HU NULL
#define FBA2012CPS2_CONTROLS_INFO_0_HU NULL
#define OPTION_VAL_GAMEPAD_HU NULL
#define OPTION_VAL_ARCADE_HU NULL
#define FBA2012CPS2_ASPECT_LABEL_HU NULL
#define FBA2012CPS2_ASPECT_INFO_0_HU NULL
#define OPTION_VAL_DAR_HU NULL
#define OPTION_VAL_PAR_HU NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_HU NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_HU NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_HU NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_HU NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_HU NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_HU NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_HU NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_HU NULL
#define OPTION_VAL_AUTO_HU NULL
#define OPTION_VAL_MANUAL_HU NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_HU NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_HU NULL

struct retro_core_option_v2_category option_cats_hu[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hu[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_HU,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_HU,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_HU,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_HU,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_HU,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_HU,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_HU },
         { "arcade",  OPTION_VAL_ARCADE_HU },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_HU,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_HU,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_HU },
         { "PAR", OPTION_VAL_PAR_HU },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_HU,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_HU,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_HU,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_HU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_HU,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_HU,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_HU,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_HU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_HU },
         { "manual",   OPTION_VAL_MANUAL_HU },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_HU,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_HU,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hu = {
   option_cats_hu,
   option_defs_hu
};

/* RETRO_LANGUAGE_ID */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_ID NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_ID NULL
#define FBA2012CPS2_HISCORES_LABEL_ID NULL
#define FBA2012CPS2_HISCORES_INFO_0_ID NULL
#define FBA2012CPS2_CONTROLS_LABEL_ID NULL
#define FBA2012CPS2_CONTROLS_INFO_0_ID NULL
#define OPTION_VAL_GAMEPAD_ID NULL
#define OPTION_VAL_ARCADE_ID NULL
#define FBA2012CPS2_ASPECT_LABEL_ID NULL
#define FBA2012CPS2_ASPECT_INFO_0_ID NULL
#define OPTION_VAL_DAR_ID NULL
#define OPTION_VAL_PAR_ID NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_ID NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_ID NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_ID NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_ID NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_ID NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_ID NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_ID NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_ID NULL
#define OPTION_VAL_AUTO_ID NULL
#define OPTION_VAL_MANUAL_ID NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_ID NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_ID NULL

struct retro_core_option_v2_category option_cats_id[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_id[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_ID,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_ID,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_ID,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_ID,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_ID,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_ID,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_ID },
         { "arcade",  OPTION_VAL_ARCADE_ID },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_ID,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_ID,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_ID },
         { "PAR", OPTION_VAL_PAR_ID },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_ID,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_ID,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_ID,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_ID,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_ID,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_ID,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_ID,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_ID,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_ID },
         { "manual",   OPTION_VAL_MANUAL_ID },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_ID,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_ID,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_id = {
   option_cats_id,
   option_defs_id
};

/* RETRO_LANGUAGE_IT */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_IT NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_IT NULL
#define FBA2012CPS2_HISCORES_LABEL_IT NULL
#define FBA2012CPS2_HISCORES_INFO_0_IT NULL
#define FBA2012CPS2_CONTROLS_LABEL_IT NULL
#define FBA2012CPS2_CONTROLS_INFO_0_IT NULL
#define OPTION_VAL_GAMEPAD_IT NULL
#define OPTION_VAL_ARCADE_IT NULL
#define FBA2012CPS2_ASPECT_LABEL_IT NULL
#define FBA2012CPS2_ASPECT_INFO_0_IT NULL
#define OPTION_VAL_DAR_IT NULL
#define OPTION_VAL_PAR_IT NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_IT NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_IT NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_IT NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_IT NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_IT NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_IT NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_IT NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_IT NULL
#define OPTION_VAL_AUTO_IT NULL
#define OPTION_VAL_MANUAL_IT NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_IT NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_IT NULL

struct retro_core_option_v2_category option_cats_it[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_it[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_IT,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_IT,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_IT,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_IT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_IT,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_IT,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_IT },
         { "arcade",  OPTION_VAL_ARCADE_IT },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_IT,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_IT,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_IT },
         { "PAR", OPTION_VAL_PAR_IT },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_IT,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_IT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_IT,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_IT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_IT,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_IT,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_IT,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_IT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_IT },
         { "manual",   OPTION_VAL_MANUAL_IT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_IT,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_IT,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_it = {
   option_cats_it,
   option_defs_it
};

/* RETRO_LANGUAGE_JA */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_JA NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_JA NULL
#define FBA2012CPS2_HISCORES_LABEL_JA NULL
#define FBA2012CPS2_HISCORES_INFO_0_JA NULL
#define FBA2012CPS2_CONTROLS_LABEL_JA NULL
#define FBA2012CPS2_CONTROLS_INFO_0_JA NULL
#define OPTION_VAL_GAMEPAD_JA NULL
#define OPTION_VAL_ARCADE_JA NULL
#define FBA2012CPS2_ASPECT_LABEL_JA NULL
#define FBA2012CPS2_ASPECT_INFO_0_JA NULL
#define OPTION_VAL_DAR_JA NULL
#define OPTION_VAL_PAR_JA NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_JA NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_JA NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_JA NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_JA NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_JA NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_JA NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_JA NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_JA NULL
#define OPTION_VAL_AUTO_JA NULL
#define OPTION_VAL_MANUAL_JA NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_JA NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_JA NULL

struct retro_core_option_v2_category option_cats_ja[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ja[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_JA,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_JA,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_JA,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_JA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_JA,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_JA,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_JA },
         { "arcade",  OPTION_VAL_ARCADE_JA },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_JA,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_JA,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_JA },
         { "PAR", OPTION_VAL_PAR_JA },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_JA,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_JA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_JA,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_JA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_JA,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_JA,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_JA,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_JA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_JA },
         { "manual",   OPTION_VAL_MANUAL_JA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_JA,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_JA,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ja = {
   option_cats_ja,
   option_defs_ja
};

/* RETRO_LANGUAGE_KO */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_KO NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_KO NULL
#define FBA2012CPS2_HISCORES_LABEL_KO NULL
#define FBA2012CPS2_HISCORES_INFO_0_KO NULL
#define FBA2012CPS2_CONTROLS_LABEL_KO NULL
#define FBA2012CPS2_CONTROLS_INFO_0_KO NULL
#define OPTION_VAL_GAMEPAD_KO NULL
#define OPTION_VAL_ARCADE_KO NULL
#define FBA2012CPS2_ASPECT_LABEL_KO NULL
#define FBA2012CPS2_ASPECT_INFO_0_KO NULL
#define OPTION_VAL_DAR_KO NULL
#define OPTION_VAL_PAR_KO NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_KO NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_KO NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_KO NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_KO NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_KO NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_KO NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_KO NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_KO NULL
#define OPTION_VAL_AUTO_KO NULL
#define OPTION_VAL_MANUAL_KO NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_KO NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_KO NULL

struct retro_core_option_v2_category option_cats_ko[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ko[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_KO,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_KO,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_KO,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_KO,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_KO,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_KO,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_KO },
         { "arcade",  OPTION_VAL_ARCADE_KO },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_KO,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_KO,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_KO },
         { "PAR", OPTION_VAL_PAR_KO },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_KO,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_KO,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_KO,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_KO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_KO,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_KO,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_KO,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_KO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_KO },
         { "manual",   OPTION_VAL_MANUAL_KO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_KO,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_KO,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ko = {
   option_cats_ko,
   option_defs_ko
};

/* RETRO_LANGUAGE_MT */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_MT NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_MT NULL
#define FBA2012CPS2_HISCORES_LABEL_MT NULL
#define FBA2012CPS2_HISCORES_INFO_0_MT NULL
#define FBA2012CPS2_CONTROLS_LABEL_MT NULL
#define FBA2012CPS2_CONTROLS_INFO_0_MT NULL
#define OPTION_VAL_GAMEPAD_MT NULL
#define OPTION_VAL_ARCADE_MT NULL
#define FBA2012CPS2_ASPECT_LABEL_MT NULL
#define FBA2012CPS2_ASPECT_INFO_0_MT NULL
#define OPTION_VAL_DAR_MT NULL
#define OPTION_VAL_PAR_MT NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_MT NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_MT NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_MT NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_MT NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_MT NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_MT NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_MT NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_MT NULL
#define OPTION_VAL_AUTO_MT NULL
#define OPTION_VAL_MANUAL_MT NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_MT NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_MT NULL

struct retro_core_option_v2_category option_cats_mt[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_mt[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_MT,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_MT,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_MT,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_MT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_MT,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_MT,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_MT },
         { "arcade",  OPTION_VAL_ARCADE_MT },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_MT,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_MT,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_MT },
         { "PAR", OPTION_VAL_PAR_MT },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_MT,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_MT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_MT,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_MT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_MT,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_MT,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_MT,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_MT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_MT },
         { "manual",   OPTION_VAL_MANUAL_MT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_MT,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_MT,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_mt = {
   option_cats_mt,
   option_defs_mt
};

/* RETRO_LANGUAGE_NL */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_NL NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_NL NULL
#define FBA2012CPS2_HISCORES_LABEL_NL NULL
#define FBA2012CPS2_HISCORES_INFO_0_NL NULL
#define FBA2012CPS2_CONTROLS_LABEL_NL NULL
#define FBA2012CPS2_CONTROLS_INFO_0_NL NULL
#define OPTION_VAL_GAMEPAD_NL NULL
#define OPTION_VAL_ARCADE_NL NULL
#define FBA2012CPS2_ASPECT_LABEL_NL NULL
#define FBA2012CPS2_ASPECT_INFO_0_NL NULL
#define OPTION_VAL_DAR_NL NULL
#define OPTION_VAL_PAR_NL NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_NL NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_NL NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_NL NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_NL NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_NL NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_NL NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_NL NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_NL NULL
#define OPTION_VAL_AUTO_NL NULL
#define OPTION_VAL_MANUAL_NL NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_NL NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_NL NULL

struct retro_core_option_v2_category option_cats_nl[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_nl[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_NL,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_NL,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_NL,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_NL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_NL,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_NL,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_NL },
         { "arcade",  OPTION_VAL_ARCADE_NL },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_NL,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_NL,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_NL },
         { "PAR", OPTION_VAL_PAR_NL },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_NL,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_NL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_NL,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_NL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_NL,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_NL,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_NL,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_NL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_NL },
         { "manual",   OPTION_VAL_MANUAL_NL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_NL,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_NL,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_nl = {
   option_cats_nl,
   option_defs_nl
};

/* RETRO_LANGUAGE_OC */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_OC NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_OC NULL
#define FBA2012CPS2_HISCORES_LABEL_OC NULL
#define FBA2012CPS2_HISCORES_INFO_0_OC NULL
#define FBA2012CPS2_CONTROLS_LABEL_OC NULL
#define FBA2012CPS2_CONTROLS_INFO_0_OC NULL
#define OPTION_VAL_GAMEPAD_OC NULL
#define OPTION_VAL_ARCADE_OC NULL
#define FBA2012CPS2_ASPECT_LABEL_OC NULL
#define FBA2012CPS2_ASPECT_INFO_0_OC NULL
#define OPTION_VAL_DAR_OC NULL
#define OPTION_VAL_PAR_OC NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_OC NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_OC NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_OC NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_OC NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_OC NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_OC NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_OC NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_OC NULL
#define OPTION_VAL_AUTO_OC NULL
#define OPTION_VAL_MANUAL_OC NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_OC NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_OC NULL

struct retro_core_option_v2_category option_cats_oc[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_oc[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_OC,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_OC,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_OC,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_OC,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_OC,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_OC,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_OC },
         { "arcade",  OPTION_VAL_ARCADE_OC },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_OC,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_OC,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_OC },
         { "PAR", OPTION_VAL_PAR_OC },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_OC,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_OC,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_OC,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_OC,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_OC,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_OC,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_OC,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_OC,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_OC },
         { "manual",   OPTION_VAL_MANUAL_OC },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_OC,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_OC,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_oc = {
   option_cats_oc,
   option_defs_oc
};

/* RETRO_LANGUAGE_PL */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_PL NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_PL NULL
#define FBA2012CPS2_HISCORES_LABEL_PL NULL
#define FBA2012CPS2_HISCORES_INFO_0_PL NULL
#define FBA2012CPS2_CONTROLS_LABEL_PL NULL
#define FBA2012CPS2_CONTROLS_INFO_0_PL NULL
#define OPTION_VAL_GAMEPAD_PL NULL
#define OPTION_VAL_ARCADE_PL NULL
#define FBA2012CPS2_ASPECT_LABEL_PL NULL
#define FBA2012CPS2_ASPECT_INFO_0_PL NULL
#define OPTION_VAL_DAR_PL NULL
#define OPTION_VAL_PAR_PL NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_PL NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_PL NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_PL NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_PL NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_PL NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_PL NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_PL NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_PL NULL
#define OPTION_VAL_AUTO_PL NULL
#define OPTION_VAL_MANUAL_PL NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_PL NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_PL NULL

struct retro_core_option_v2_category option_cats_pl[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pl[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_PL,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_PL,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_PL,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_PL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_PL,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_PL,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_PL },
         { "arcade",  OPTION_VAL_ARCADE_PL },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_PL,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_PL,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_PL },
         { "PAR", OPTION_VAL_PAR_PL },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_PL,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_PL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_PL,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_PL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_PL,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_PL,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_PL,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_PL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_PL },
         { "manual",   OPTION_VAL_MANUAL_PL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_PL,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_PL,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pl = {
   option_cats_pl,
   option_defs_pl
};

/* RETRO_LANGUAGE_PT_BR */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_PT_BR NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_PT_BR NULL
#define FBA2012CPS2_HISCORES_LABEL_PT_BR NULL
#define FBA2012CPS2_HISCORES_INFO_0_PT_BR NULL
#define FBA2012CPS2_CONTROLS_LABEL_PT_BR NULL
#define FBA2012CPS2_CONTROLS_INFO_0_PT_BR NULL
#define OPTION_VAL_GAMEPAD_PT_BR NULL
#define OPTION_VAL_ARCADE_PT_BR NULL
#define FBA2012CPS2_ASPECT_LABEL_PT_BR NULL
#define FBA2012CPS2_ASPECT_INFO_0_PT_BR NULL
#define OPTION_VAL_DAR_PT_BR NULL
#define OPTION_VAL_PAR_PT_BR NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_PT_BR NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_PT_BR NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_PT_BR NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_PT_BR NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_PT_BR NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_PT_BR NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_PT_BR NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_PT_BR NULL
#define OPTION_VAL_AUTO_PT_BR NULL
#define OPTION_VAL_MANUAL_PT_BR NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_PT_BR NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_PT_BR NULL

struct retro_core_option_v2_category option_cats_pt_br[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_br[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_PT_BR,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_PT_BR,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_PT_BR,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_PT_BR },
         { "arcade",  OPTION_VAL_ARCADE_PT_BR },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_PT_BR,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_PT_BR },
         { "PAR", OPTION_VAL_PAR_PT_BR },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_PT_BR,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_PT_BR,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_PT_BR,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_PT_BR,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_PT_BR },
         { "manual",   OPTION_VAL_MANUAL_PT_BR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_PT_BR,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_br = {
   option_cats_pt_br,
   option_defs_pt_br
};

/* RETRO_LANGUAGE_PT_PT */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_PT_PT NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_PT_PT NULL
#define FBA2012CPS2_HISCORES_LABEL_PT_PT NULL
#define FBA2012CPS2_HISCORES_INFO_0_PT_PT NULL
#define FBA2012CPS2_CONTROLS_LABEL_PT_PT NULL
#define FBA2012CPS2_CONTROLS_INFO_0_PT_PT NULL
#define OPTION_VAL_GAMEPAD_PT_PT NULL
#define OPTION_VAL_ARCADE_PT_PT NULL
#define FBA2012CPS2_ASPECT_LABEL_PT_PT NULL
#define FBA2012CPS2_ASPECT_INFO_0_PT_PT NULL
#define OPTION_VAL_DAR_PT_PT NULL
#define OPTION_VAL_PAR_PT_PT NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_PT_PT NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_PT_PT NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_PT_PT NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_PT_PT NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_PT_PT NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_PT_PT NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_PT_PT NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_PT_PT NULL
#define OPTION_VAL_AUTO_PT_PT NULL
#define OPTION_VAL_MANUAL_PT_PT NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_PT_PT NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_PT_PT NULL

struct retro_core_option_v2_category option_cats_pt_pt[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_pt[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_PT_PT,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_PT_PT,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_PT_PT,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_PT_PT },
         { "arcade",  OPTION_VAL_ARCADE_PT_PT },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_PT_PT,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_PT_PT },
         { "PAR", OPTION_VAL_PAR_PT_PT },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_PT_PT,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_PT_PT,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_PT_PT,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_PT_PT,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_PT_PT },
         { "manual",   OPTION_VAL_MANUAL_PT_PT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_PT_PT,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_pt = {
   option_cats_pt_pt,
   option_defs_pt_pt
};

/* RETRO_LANGUAGE_RO */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_RO NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_RO NULL
#define FBA2012CPS2_HISCORES_LABEL_RO NULL
#define FBA2012CPS2_HISCORES_INFO_0_RO NULL
#define FBA2012CPS2_CONTROLS_LABEL_RO NULL
#define FBA2012CPS2_CONTROLS_INFO_0_RO NULL
#define OPTION_VAL_GAMEPAD_RO NULL
#define OPTION_VAL_ARCADE_RO NULL
#define FBA2012CPS2_ASPECT_LABEL_RO NULL
#define FBA2012CPS2_ASPECT_INFO_0_RO NULL
#define OPTION_VAL_DAR_RO NULL
#define OPTION_VAL_PAR_RO NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_RO NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_RO NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_RO NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_RO NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_RO NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_RO NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_RO NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_RO NULL
#define OPTION_VAL_AUTO_RO NULL
#define OPTION_VAL_MANUAL_RO NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_RO NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_RO NULL

struct retro_core_option_v2_category option_cats_ro[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ro[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_RO,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_RO,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_RO,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_RO,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_RO,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_RO,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_RO },
         { "arcade",  OPTION_VAL_ARCADE_RO },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_RO,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_RO,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_RO },
         { "PAR", OPTION_VAL_PAR_RO },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_RO,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_RO,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_RO,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_RO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_RO,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_RO,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_RO,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_RO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_RO },
         { "manual",   OPTION_VAL_MANUAL_RO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_RO,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_RO,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ro = {
   option_cats_ro,
   option_defs_ro
};

/* RETRO_LANGUAGE_RU */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_RU NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_RU NULL
#define FBA2012CPS2_HISCORES_LABEL_RU NULL
#define FBA2012CPS2_HISCORES_INFO_0_RU NULL
#define FBA2012CPS2_CONTROLS_LABEL_RU NULL
#define FBA2012CPS2_CONTROLS_INFO_0_RU NULL
#define OPTION_VAL_GAMEPAD_RU NULL
#define OPTION_VAL_ARCADE_RU NULL
#define FBA2012CPS2_ASPECT_LABEL_RU NULL
#define FBA2012CPS2_ASPECT_INFO_0_RU NULL
#define OPTION_VAL_DAR_RU NULL
#define OPTION_VAL_PAR_RU NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_RU NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_RU NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_RU NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_RU NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_RU NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_RU NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_RU NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_RU NULL
#define OPTION_VAL_AUTO_RU NULL
#define OPTION_VAL_MANUAL_RU NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_RU NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_RU NULL

struct retro_core_option_v2_category option_cats_ru[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ru[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_RU,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_RU,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_RU,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_RU,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_RU,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_RU,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_RU },
         { "arcade",  OPTION_VAL_ARCADE_RU },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_RU,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_RU,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_RU },
         { "PAR", OPTION_VAL_PAR_RU },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_RU,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_RU,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_RU,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_RU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_RU,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_RU,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_RU,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_RU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_RU },
         { "manual",   OPTION_VAL_MANUAL_RU },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_RU,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_RU,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ru = {
   option_cats_ru,
   option_defs_ru
};

/* RETRO_LANGUAGE_SI */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_SI NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_SI NULL
#define FBA2012CPS2_HISCORES_LABEL_SI NULL
#define FBA2012CPS2_HISCORES_INFO_0_SI NULL
#define FBA2012CPS2_CONTROLS_LABEL_SI NULL
#define FBA2012CPS2_CONTROLS_INFO_0_SI NULL
#define OPTION_VAL_GAMEPAD_SI NULL
#define OPTION_VAL_ARCADE_SI NULL
#define FBA2012CPS2_ASPECT_LABEL_SI NULL
#define FBA2012CPS2_ASPECT_INFO_0_SI NULL
#define OPTION_VAL_DAR_SI NULL
#define OPTION_VAL_PAR_SI NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_SI NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_SI NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_SI NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_SI NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_SI NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_SI NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_SI NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_SI NULL
#define OPTION_VAL_AUTO_SI NULL
#define OPTION_VAL_MANUAL_SI NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_SI NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_SI NULL

struct retro_core_option_v2_category option_cats_si[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_si[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_SI,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_SI,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_SI,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_SI,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_SI,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_SI,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_SI },
         { "arcade",  OPTION_VAL_ARCADE_SI },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_SI,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_SI,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_SI },
         { "PAR", OPTION_VAL_PAR_SI },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_SI,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_SI,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_SI,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_SI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_SI,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_SI,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_SI,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_SI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_SI },
         { "manual",   OPTION_VAL_MANUAL_SI },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_SI,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_SI,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_si = {
   option_cats_si,
   option_defs_si
};

/* RETRO_LANGUAGE_SK */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_SK NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_SK NULL
#define FBA2012CPS2_HISCORES_LABEL_SK NULL
#define FBA2012CPS2_HISCORES_INFO_0_SK NULL
#define FBA2012CPS2_CONTROLS_LABEL_SK NULL
#define FBA2012CPS2_CONTROLS_INFO_0_SK NULL
#define OPTION_VAL_GAMEPAD_SK NULL
#define OPTION_VAL_ARCADE_SK NULL
#define FBA2012CPS2_ASPECT_LABEL_SK NULL
#define FBA2012CPS2_ASPECT_INFO_0_SK NULL
#define OPTION_VAL_DAR_SK NULL
#define OPTION_VAL_PAR_SK NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_SK NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_SK NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_SK NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_SK NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_SK NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_SK NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_SK NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_SK NULL
#define OPTION_VAL_AUTO_SK NULL
#define OPTION_VAL_MANUAL_SK NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_SK NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_SK NULL

struct retro_core_option_v2_category option_cats_sk[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sk[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_SK,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_SK,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_SK,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_SK,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_SK,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_SK,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_SK },
         { "arcade",  OPTION_VAL_ARCADE_SK },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_SK,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_SK,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_SK },
         { "PAR", OPTION_VAL_PAR_SK },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_SK,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_SK,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_SK,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_SK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_SK,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_SK,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_SK,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_SK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_SK },
         { "manual",   OPTION_VAL_MANUAL_SK },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_SK,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_SK,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sk = {
   option_cats_sk,
   option_defs_sk
};

/* RETRO_LANGUAGE_SR */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_SR NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_SR NULL
#define FBA2012CPS2_HISCORES_LABEL_SR NULL
#define FBA2012CPS2_HISCORES_INFO_0_SR NULL
#define FBA2012CPS2_CONTROLS_LABEL_SR NULL
#define FBA2012CPS2_CONTROLS_INFO_0_SR NULL
#define OPTION_VAL_GAMEPAD_SR NULL
#define OPTION_VAL_ARCADE_SR NULL
#define FBA2012CPS2_ASPECT_LABEL_SR NULL
#define FBA2012CPS2_ASPECT_INFO_0_SR NULL
#define OPTION_VAL_DAR_SR NULL
#define OPTION_VAL_PAR_SR NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_SR NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_SR NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_SR NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_SR NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_SR NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_SR NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_SR NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_SR NULL
#define OPTION_VAL_AUTO_SR NULL
#define OPTION_VAL_MANUAL_SR NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_SR NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_SR NULL

struct retro_core_option_v2_category option_cats_sr[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sr[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_SR,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_SR,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_SR,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_SR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_SR,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_SR,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_SR },
         { "arcade",  OPTION_VAL_ARCADE_SR },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_SR,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_SR,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_SR },
         { "PAR", OPTION_VAL_PAR_SR },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_SR,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_SR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_SR,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_SR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_SR,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_SR,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_SR,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_SR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_SR },
         { "manual",   OPTION_VAL_MANUAL_SR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_SR,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_SR,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sr = {
   option_cats_sr,
   option_defs_sr
};

/* RETRO_LANGUAGE_SV */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_SV NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_SV NULL
#define FBA2012CPS2_HISCORES_LABEL_SV NULL
#define FBA2012CPS2_HISCORES_INFO_0_SV NULL
#define FBA2012CPS2_CONTROLS_LABEL_SV NULL
#define FBA2012CPS2_CONTROLS_INFO_0_SV NULL
#define OPTION_VAL_GAMEPAD_SV NULL
#define OPTION_VAL_ARCADE_SV NULL
#define FBA2012CPS2_ASPECT_LABEL_SV NULL
#define FBA2012CPS2_ASPECT_INFO_0_SV NULL
#define OPTION_VAL_DAR_SV NULL
#define OPTION_VAL_PAR_SV NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_SV NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_SV NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_SV NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_SV NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_SV NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_SV NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_SV NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_SV NULL
#define OPTION_VAL_AUTO_SV NULL
#define OPTION_VAL_MANUAL_SV NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_SV NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_SV NULL

struct retro_core_option_v2_category option_cats_sv[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sv[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_SV,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_SV,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_SV,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_SV,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_SV,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_SV,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_SV },
         { "arcade",  OPTION_VAL_ARCADE_SV },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_SV,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_SV,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_SV },
         { "PAR", OPTION_VAL_PAR_SV },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_SV,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_SV,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_SV,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_SV,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_SV,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_SV,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_SV,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_SV,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_SV },
         { "manual",   OPTION_VAL_MANUAL_SV },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_SV,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_SV,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sv = {
   option_cats_sv,
   option_defs_sv
};

/* RETRO_LANGUAGE_TR */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_TR "CPU Hızı (%)"
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_TR "Öykünmüş CPU'nun hız aşırtmasını sağlar. Yavaşlamayı azaltabilir, ancak hatalara neden olabilir."
#define FBA2012CPS2_HISCORES_LABEL_TR NULL
#define FBA2012CPS2_HISCORES_INFO_0_TR NULL
#define FBA2012CPS2_CONTROLS_LABEL_TR "Kontroller"
#define FBA2012CPS2_CONTROLS_INFO_0_TR "Varsayılan denetleyici eşlemesini ayarlayın."
#define OPTION_VAL_GAMEPAD_TR "Oyun kumandası"
#define OPTION_VAL_ARCADE_TR NULL
#define FBA2012CPS2_ASPECT_LABEL_TR NULL
#define FBA2012CPS2_ASPECT_INFO_0_TR NULL
#define OPTION_VAL_DAR_TR NULL
#define OPTION_VAL_PAR_TR NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_TR NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_TR NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_TR NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_TR NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_TR NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_TR NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_TR "Kare Atlama"
#define FBA2012CPS2_FRAMESKIP_INFO_0_TR "Yetersiz çalışan ses arabelleğini, çatırtı önlemek için kareleri atlar. Görsel pürüzsüzlük pahasına performansı iyileştirir. 'Otomatik', ön uç tarafından önerildiğinde kareleri atlar. 'El ile', 'Kara Atlama Eşiği (%)' ayarını kullanır."
#define OPTION_VAL_AUTO_TR NULL
#define OPTION_VAL_MANUAL_TR NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_TR NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_TR "Kare Atlama', 'El ile' olarak ayarlandığında, altındaki karelerin atlanacağı ses arabelleği doluluk eşiğini (yüzde olarak) belirtir. Daha yüksek değerler, karelerin daha sık düşmesine neden olarak çatlama riskini azaltır."

struct retro_core_option_v2_category option_cats_tr[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tr[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_TR,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_TR,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_TR,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_TR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_TR,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_TR,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_TR },
         { "arcade",  OPTION_VAL_ARCADE_TR },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_TR,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_TR,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_TR },
         { "PAR", OPTION_VAL_PAR_TR },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_TR,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_TR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_TR,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_TR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_TR,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_TR,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_TR,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_TR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_TR },
         { "manual",   OPTION_VAL_MANUAL_TR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_TR,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_TR,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_UK */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_UK NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_UK NULL
#define FBA2012CPS2_HISCORES_LABEL_UK NULL
#define FBA2012CPS2_HISCORES_INFO_0_UK NULL
#define FBA2012CPS2_CONTROLS_LABEL_UK NULL
#define FBA2012CPS2_CONTROLS_INFO_0_UK NULL
#define OPTION_VAL_GAMEPAD_UK NULL
#define OPTION_VAL_ARCADE_UK NULL
#define FBA2012CPS2_ASPECT_LABEL_UK NULL
#define FBA2012CPS2_ASPECT_INFO_0_UK NULL
#define OPTION_VAL_DAR_UK NULL
#define OPTION_VAL_PAR_UK NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_UK NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_UK NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_UK NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_UK NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_UK NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_UK NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_UK NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_UK NULL
#define OPTION_VAL_AUTO_UK NULL
#define OPTION_VAL_MANUAL_UK NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_UK NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_UK NULL

struct retro_core_option_v2_category option_cats_uk[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_uk[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_UK,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_UK,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_UK,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_UK,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_UK,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_UK,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_UK },
         { "arcade",  OPTION_VAL_ARCADE_UK },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_UK,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_UK,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_UK },
         { "PAR", OPTION_VAL_PAR_UK },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_UK,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_UK,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_UK,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_UK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_UK,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_UK,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_UK,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_UK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_UK },
         { "manual",   OPTION_VAL_MANUAL_UK },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_UK,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_UK,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_uk = {
   option_cats_uk,
   option_defs_uk
};

/* RETRO_LANGUAGE_VN */

#define FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_VN NULL
#define FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_VN NULL
#define FBA2012CPS2_HISCORES_LABEL_VN NULL
#define FBA2012CPS2_HISCORES_INFO_0_VN NULL
#define FBA2012CPS2_CONTROLS_LABEL_VN NULL
#define FBA2012CPS2_CONTROLS_INFO_0_VN NULL
#define OPTION_VAL_GAMEPAD_VN NULL
#define OPTION_VAL_ARCADE_VN NULL
#define FBA2012CPS2_ASPECT_LABEL_VN NULL
#define FBA2012CPS2_ASPECT_INFO_0_VN NULL
#define OPTION_VAL_DAR_VN NULL
#define OPTION_VAL_PAR_VN NULL
#define FBA2012CPS2_AUTO_ROTATE_LABEL_VN NULL
#define FBA2012CPS2_AUTO_ROTATE_INFO_0_VN NULL
#define FBA2012CPS2_LOWPASS_FILTER_LABEL_VN NULL
#define FBA2012CPS2_LOWPASS_FILTER_INFO_0_VN NULL
#define FBA2012CPS2_LOWPASS_RANGE_LABEL_VN NULL
#define FBA2012CPS2_LOWPASS_RANGE_INFO_0_VN NULL
#define FBA2012CPS2_FRAMESKIP_LABEL_VN NULL
#define FBA2012CPS2_FRAMESKIP_INFO_0_VN NULL
#define OPTION_VAL_AUTO_VN NULL
#define OPTION_VAL_MANUAL_VN NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_VN NULL
#define FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_VN NULL

struct retro_core_option_v2_category option_cats_vn[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_vn[] = {
   {
      "fba2012cps2_cpu_speed_adjust",
      FBA2012CPS2_CPU_SPEED_ADJUST_LABEL_VN,
      NULL,
      FBA2012CPS2_CPU_SPEED_ADJUST_INFO_0_VN,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps2_hiscores",
      FBA2012CPS2_HISCORES_LABEL_VN,
      NULL,
      FBA2012CPS2_HISCORES_INFO_0_VN,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_controls",
      FBA2012CPS2_CONTROLS_LABEL_VN,
      NULL,
      FBA2012CPS2_CONTROLS_INFO_0_VN,
      NULL,
      NULL,
      {
         { "gamepad", OPTION_VAL_GAMEPAD_VN },
         { "arcade",  OPTION_VAL_ARCADE_VN },
         { NULL, NULL },
      },
      "gamepad"
   },
   {
      "fba2012cps2_aspect",
      FBA2012CPS2_ASPECT_LABEL_VN,
      NULL,
      FBA2012CPS2_ASPECT_INFO_0_VN,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_VN },
         { "PAR", OPTION_VAL_PAR_VN },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps2_auto_rotate",
      FBA2012CPS2_AUTO_ROTATE_LABEL_VN,
      NULL,
      FBA2012CPS2_AUTO_ROTATE_INFO_0_VN,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps2_lowpass_filter",
      FBA2012CPS2_LOWPASS_FILTER_LABEL_VN,
      NULL,
      FBA2012CPS2_LOWPASS_FILTER_INFO_0_VN,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_lowpass_range",
      FBA2012CPS2_LOWPASS_RANGE_LABEL_VN,
      NULL,
      FBA2012CPS2_LOWPASS_RANGE_INFO_0_VN,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps2_frameskip",
      FBA2012CPS2_FRAMESKIP_LABEL_VN,
      NULL,
      FBA2012CPS2_FRAMESKIP_INFO_0_VN,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_VN },
         { "manual",   OPTION_VAL_MANUAL_VN },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps2_frameskip_threshold",
      FBA2012CPS2_FRAMESKIP_THRESHOLD_LABEL_VN,
      NULL,
      FBA2012CPS2_FRAMESKIP_THRESHOLD_INFO_0_VN,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_vn = {
   option_cats_vn,
   option_defs_vn
};


#ifdef __cplusplus
}
#endif

#endif