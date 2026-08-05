// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "sendstring_spanish.h"


enum custom_keycodes {
    A_AIGU = SAFE_RANGE,
    E_AIGU,
    I_AIGU,
    O_AIGU,
    U_AIGU,
    A_GRAVE,
    E_GRAVE,
    I_GRAVE,
    O_GRAVE,
    U_GRAVE,
    A_CIRC,
    E_CIRC,
    I_CIRC,
    O_CIRC,
    U_CIRC,
    A_TREM,
    E_TREM,
    I_TREM,
    O_TREM,
    U_TREM,
    A_GRAVE_MAJ,
    A_AIGU_MAJ,
    E_GRAVE_MAJ,
    E_AIGU_MAJ,
    MAIL_PERSO,
    MAIL_PRO,
    PASSW1,
    PASSW1b,
    PASSW2
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case A_AIGU:
        if (record->event.pressed) {
	  SEND_STRING(SS_TAP(X_QUOT) SS_TAP(X_A));
        }
        break;

    case E_AIGU:
        if (record->event.pressed) {
	  SEND_STRING(SS_TAP(X_QUOT) SS_TAP(X_E));
        }
        break;

    case I_AIGU:
        if (record->event.pressed) {
	  SEND_STRING(SS_TAP(X_QUOT) SS_TAP(X_I));
        }
        break;

    case O_AIGU:
        if (record->event.pressed) {
	  SEND_STRING(SS_TAP(X_QUOT) SS_TAP(X_O));
        }
        break;

    case U_AIGU:
        if (record->event.pressed) {
	  SEND_STRING(SS_TAP(X_QUOT) SS_TAP(X_U));
        }
        break;
	
    case A_GRAVE:
        if (record->event.pressed) {
	  SEND_STRING(SS_TAP(X_LBRC) SS_TAP(X_A));
        }
        break;

    case E_GRAVE:
        if (record->event.pressed) {
	  SEND_STRING(SS_TAP(X_LBRC) SS_TAP(X_E));
        }
        break;

    case I_GRAVE:
        if (record->event.pressed) {
	  SEND_STRING(SS_TAP(X_LBRC) SS_TAP(X_I));
        }
        break;

    case O_GRAVE:
        if (record->event.pressed) {
	  SEND_STRING(SS_TAP(X_LBRC) SS_TAP(X_O));
        }
        break;

    case U_GRAVE:
        if (record->event.pressed) {
	  SEND_STRING(SS_TAP(X_LBRC) SS_TAP(X_U));
        }
        break;

    case A_CIRC:
        if (record->event.pressed) {
	  SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_LBRC) SS_UP(X_LSFT) SS_TAP(X_A));
        }
        break;

    case E_CIRC:
        if (record->event.pressed) {
	  SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_LBRC) SS_UP(X_LSFT) SS_TAP(X_E));
        }
        break;

    case I_CIRC:
        if (record->event.pressed) {
	  SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_LBRC) SS_UP(X_LSFT) SS_TAP(X_I));
        }
        break;

    case O_CIRC:
        if (record->event.pressed) {
	  SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_LBRC) SS_UP(X_LSFT) SS_TAP(X_O));
        }
        break;

    case U_CIRC:
        if (record->event.pressed) {
	  SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_LBRC) SS_UP(X_LSFT) SS_TAP(X_U));
        }
        break;
    case A_TREM:
        if (record->event.pressed) {
	  SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_QUOT) SS_UP(X_LSFT) SS_TAP(X_A));
        }
        break;

    case E_TREM:
        if (record->event.pressed) {
	  SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_QUOT) SS_UP(X_LSFT) SS_TAP(X_E));
        }
        break;

    case I_TREM:
        if (record->event.pressed) {
	  SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_QUOT) SS_UP(X_LSFT) SS_TAP(X_I));
        }
        break;

    case O_TREM:
        if (record->event.pressed) {
	  SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_QUOT) SS_UP(X_LSFT) SS_TAP(X_O));
        }
        break;

    case U_TREM:
        if (record->event.pressed) {
	  SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_QUOT) SS_UP(X_LSFT) SS_TAP(X_U));
        }
        break;

    case A_GRAVE_MAJ:
        if (record->event.pressed) {
	  SEND_STRING(SS_TAP(X_LBRC) SS_DOWN(X_LSFT) SS_TAP(X_A) SS_UP(X_LSFT));
        }
        break;

    case A_AIGU_MAJ:
        if (record->event.pressed) {
	  SEND_STRING(SS_TAP(X_QUOT) SS_DOWN(X_LSFT) SS_TAP(X_A) SS_UP(X_LSFT));
        }
        break;
		
    case E_GRAVE_MAJ:
        if (record->event.pressed) {
	  SEND_STRING(SS_TAP(X_LBRC) SS_DOWN(X_LSFT) SS_TAP(X_E) SS_UP(X_LSFT));
        }
        break;

    case E_AIGU_MAJ:
        if (record->event.pressed) {
	  SEND_STRING(SS_TAP(X_QUOT) SS_DOWN(X_LSFT) SS_TAP(X_E) SS_UP(X_LSFT));
        }
        break;	

    case MAIL_PERSO:
      if (record->event.pressed) {
	  SEND_STRING("bastien.maubert@gmail.com");
        }
        break;	

    case MAIL_PRO:
      if (record->event.pressed) {
	  SEND_STRING("bastien.maubert@amplexor.com");
        }
        break;	

    case PASSW1:
      if (record->event.pressed) {
	  SEND_STRING("KouniF@123");
        }
        break;	

    case PASSW1b:
      if (record->event.pressed) {
	  SEND_STRING("INTLaco@123456");
        }
        break;	

    case PASSW2:
      if (record->event.pressed) {
	SEND_STRING("0S(laye)R1");
      }
      break;	

    }
    return true;
};


enum layer_names { 
    _BASE,
    _SYM,
    _NAV,
    _NUM,
    _FUN,
    _MEDIA,
    _MOUSE,
    _WHEEL,
    _ALTTAB
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
            ES_QUOT,    ES_Q,    ES_C,  ES_N,  ES_D,   LT(_FUN, ES_K),                    LT(_MEDIA, ES_J),  ES_U,     ES_O,      ES_G,    ES_X,   ES_CIRC,
            KC_BSPC,   ES_P,    ES_S,  ES_R,  ES_T,   ES_V,                           ES_Y,        ES_I,     ES_A,     ES_L,    ES_H,    KC_DEL,
            ES_Z,      ES_W,    ES_F,  ES_B,  ES_M,   ES_GRV,                           ES_GRV,           ES_COMM,  E_AIGU,    ES_DOT,  ES_MINS, ES_PLUS,
                                 	   KC_ESCAPE, KC_SPC, OSL(_SYM),            OSM(MOD_LSFT),  LT(_NAV, ES_E),  KC_ENTER
			     ),
    [_SYM] = LAYOUT_split_3x6_3(
            XXXXXXX,   XXXXXXX,   ES_CCED,   ES_NTIL,   ES_EQL,   XXXXXXX,                  XXXXXXX,  ES_QUOT,   ES_DQUO,   ES_PERC,   ES_MORD,  ES_DIAE,
	    KC_TRNS,   ES_LCBR,   ES_LABK,   ES_LBRC,   ES_LPRN,   XXXXXXX,                  ES_ASTR,  ES_RPRN,   ES_RBRC,   ES_RABK,   ES_RCBR,  KC_TRNS,
	    XXXXXXX,   XXXXXXX,   ES_BSLS,   ES_PIPE,   ES_SLSH,    ES_ACUT,                  ES_TILD,  ES_HASH,   ES_AMPR,   ES_COLN,  ES_UNDS,  XXXXXXX,
                                               	    XXXXXXX, XXXXXXX, XXXXXXX,              KC_CAPS_LOCK, ES_EURO, ES_DLR
			     ),
    [_NAV] = LAYOUT_split_3x6_3(
            XXXXXXX,     KC_PGUP,   KC_HOME,   KC_UP,     KC_END,    XXXXXXX,                  XXXXXXX,    XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,
	    KC_TRNS,     KC_PGDN,   KC_LEFT,   KC_DOWN,   KC_RIGHT,  XXXXXXX,                  XXXXXXX,    KC_TRNS,     KC_TRNS,     KC_TRNS,   XXXXXXX,   KC_TRNS,
	    XXXXXXX,   C(ES_A),   C(ES_X),   C(ES_C),   C(ES_V),   C(ES_Z),                  XXXXXXX,    XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,  XXXXXXX,
                                                      KC_TRNS,   KC_LSFT,  XXXXXXX,       XXXXXXX,  KC_TRNS, KC_TRNS
			     ),
    [_NUM] = LAYOUT_split_3x6_3(
            XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   ES_SLSH,    ES_4,     ES_5,     ES_6,     ES_ASTR,   XXXXXXX,
	    KC_TRNS,     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   ES_MINS,    ES_1,     ES_2,     ES_3,     ES_PLUS,   KC_TRNS,
	    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    ES_7,     ES_8,     ES_9,     KC_TRNS,   XXXXXXX,
                                        	    XXXXXXX,   KC_SPC,  XXXXXXX,       ES_DOT,  ES_0,  ES_COMM
			     ),
    [_FUN] = LAYOUT_split_3x6_3(
            XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    KC_F4,    KC_F5,    KC_F6,    KC_F10,    DT_UP,
	    XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    KC_F1,    KC_F2,    KC_F3,    KC_F11,    DT_PRNT,
	    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    KC_F7,    KC_F8,    KC_F9,    KC_F12,    DT_DOWN,
                                         	    XXXXXXX,   XXXXXXX,  KC_LSFT,       XXXXXXX,  XXXXXXX,  XXXXXXX
			     ),
    [_MEDIA] = LAYOUT_split_3x6_3(
            XXXXXXX,     XXXXXXX,   KC_BRID,   XXXXXXX,   KC_BRIU,   XXXXXXX,                   XXXXXXX,    XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,
	    XXXXXXX,     XXXXXXX,   KC_VOLD,   KC_MUTE,   KC_VOLU,   XXXXXXX,                   XXXXXXX,    XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,
	    XXXXXXX,   XXXXXXX,   KC_WBAK,   XXXXXXX,   KC_WFWD,   XXXXXXX,                   XXXXXXX,    XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,
                                         	    KC_MPRV,   KC_MPLY,  KC_MNXT,       XXXXXXX,  XXXXXXX,  XXXXXXX
				  ),
    [_MOUSE] = LAYOUT_split_3x6_3(
            XXXXXXX,     XXXXXXX,   XXXXXXX,   KC_TRNS,   KC_TRNS,   XXXXXXX,                   MO(_MEDIA),    XXXXXXX,     KC_MS_UP,     XXXXXXX,   XXXXXXX,   TO(_NAV),
	    KC_TRNS,     XXXXXXX,   KC_TRNS,   KC_TRNS,   KC_TRNS,   XXXXXXX,                   KC_TRNS,    KC_MS_LEFT,  KC_MS_DOWN,  KC_MS_RIGHT,  XXXXXXX,   XXXXXXX,
	    TG(_WHEEL),   XXXXXXX,  KC_LCTL,   KC_LSFT,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    XXXXXXX,     KC_BTN3,     XXXXXXX,   XXXXXXX,   KC_TRNS,
                                               	    KC_TRNS,   KC_ACL1,  KC_ACL2,       KC_BTN2,  KC_BTN1,  KC_TRNS
				  ),
    [_WHEEL] = LAYOUT_split_3x6_3(
            XXXXXXX,     XXXXXXX,   XXXXXXX,   KC_TRNS,   KC_TRNS,   XXXXXXX,                   MO(_MEDIA),    XXXXXXX,     KC_MS_WH_UP,     XXXXXXX,   XXXXXXX,   TO(_NAV),
	    KC_TRNS,     XXXXXXX,   KC_TRNS,   KC_TRNS,   KC_TRNS,   XXXXXXX,                   KC_TRNS,    KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT,  XXXXXXX,   XXXXXXX,
	    TO(_MOUSE),   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    XXXXXXX,     KC_BTN3,     XXXXXXX,   XXXXXXX,   XXXXXXX,
                                               	    KC_TRNS,   KC_ACL1,  KC_ACL2,       KC_BTN2,  KC_BTN1,  KC_TRNS
				  ),
    [_ALTTAB] = LAYOUT_split_3x6_3(
            XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,
	    XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,
	    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,
	                                        XXXXXXX,   LSFT(KC_TAB),  KC_TAB,       KC_TAB,  LSFT(KC_TAB),  XXXXXXX
				   )
};


enum combos {
  L_CTRL_CO,
  R_CTRL_CO,
  L_ALT_CO,
  R_ALT_CO,
  L_WIN_CO,
  R_WIN_CO,
  A_GRAVE_CO,
  A_GRAVE_BIS_CO,
  E_GRAVE_CO,
  E_GRAVE_BIS_CO,
  I_GRAVE_CO,
  O_GRAVE_CO,
  U_GRAVE_CO,
  A_AIGU_CO,
  E_AIGU_CO,
  I_AIGU_CO,
  O_AIGU_CO,
  U_AIGU_CO,
  A_CIRC_CO,
  E_CIRC_CO,
  I_CIRC_CO,
  O_CIRC_CO,
  U_CIRC_CO,
  A_TREM_CO,
  E_TREM_CO,
  I_TREM_CO,
  O_TREM_CO,
  U_TREM_CO,
  /* A_GRAVE_MAJ_CO, */
  /* A_AIGU_MAJ_CO, */
  /* E_GRAVE_MAJ_CO, */
  /* E_AIGU_MAJ_CO, */
  C_CED_CO,
  N_TILD_CO,
  AT_CO,
  SEMICOLON_CO,
  UNDERSCORE_CO,
  QUESTMARK_CO,
  EXCLMARK_CO,
  REV_QUESTMARK_CO,
  REV_EXCLMARK_CO,
  /* TAB_CO, */
  /* TAB_MOUSE_CO, */
  SELECT_L_CO,
  CUT_L_CO,
  COPY_L_CO,
  PASTE_L_CO,
  ENTER_L_CO,
  UNDO_L_CO,
  RENAME_L_CO,
  DELETE_L_CO,
  SELECT_R_CO,
  CUT_R_CO,
  COPY_R_CO,
  PASTE_R_CO,
  ESCAPE_R_CO,
  UNDO_R_CO,
  RENAME_R_CO,
  DELETE_R_CO,
  SELECT_MOUSE_CO,
  CUT_MOUSE_CO,
  COPY_MOUSE_CO,
  PASTE_MOUSE_CO,
  UNDO_MOUSE_CO,
  RENAME_MOUSE_CO,
  DELETE_MOUSE_CO,
  TO_MOUSE_CO,
  TO_MOUSE_BIS_CO,
  TO_NAV_CO,
  TO_BASE_CO,
  TO_BASE_BIS_CO,
  TO_BASE_TRIS_CO,
  ALT_TAB_L_CO,
  CTL_TAB_L_CO,
  ALT_TAB_R_CO,
  CTL_TAB_R_CO,
  CAPS_LOCK_CO,
  NUM_CO,
  MAIL_PERSO_CO,
  MAIL_PRO_CO,
  PASSW1_CO,
  PASSW1b_CO,
  PASSW2_CO,
  BOOTLOADER_CO,
  COMBO_LENGTH
};


uint16_t COMBO_LEN = COMBO_LENGTH; // replaces the COMBO_COUNT define in config.h 

const uint16_t PROGMEM l_ctrl_combo[] = {ES_S, ES_R, ES_T, COMBO_END};
const uint16_t PROGMEM r_ctrl_combo[] = {ES_I, ES_A, ES_L, COMBO_END};
const uint16_t PROGMEM l_alt_combo[] = {ES_C, ES_N, ES_D, COMBO_END};
const uint16_t PROGMEM r_alt_combo[] = {ES_U, ES_O, ES_G, COMBO_END};
const uint16_t PROGMEM l_win_combo[] = {ES_F, ES_B, ES_M, COMBO_END};
const uint16_t PROGMEM r_win_combo[] = {ES_COMM, E_AIGU, ES_DOT, COMBO_END};
const uint16_t PROGMEM a_grave_combo[] = {ES_A, ES_S, KC_SPC, COMBO_END};
const uint16_t PROGMEM a_grave_bis_combo[] = {LT(_NAV, ES_E), ES_A, COMBO_END};
const uint16_t PROGMEM e_grave_combo[] = {LT(_NAV, ES_E), ES_S, KC_SPC, COMBO_END};
const uint16_t PROGMEM e_grave_bis_combo[] = {LT(_NAV, ES_E), E_AIGU, COMBO_END};
const uint16_t PROGMEM i_grave_combo[] = {ES_I, ES_S, KC_SPC, COMBO_END};
const uint16_t PROGMEM o_grave_combo[] = {ES_O, ES_S, KC_SPC, COMBO_END};
const uint16_t PROGMEM u_grave_combo[] = {ES_U, ES_S, KC_SPC, COMBO_END};
const uint16_t PROGMEM a_aigu_combo[] = {ES_A, ES_T, KC_SPC, COMBO_END};
const uint16_t PROGMEM e_aigu_combo[] = {LT(_NAV, ES_E), ES_T, KC_SPC, COMBO_END};
const uint16_t PROGMEM i_aigu_combo[] = {ES_I, ES_T, KC_SPC, COMBO_END};
const uint16_t PROGMEM o_aigu_combo[] = {ES_O, ES_T, KC_SPC, COMBO_END};
const uint16_t PROGMEM u_aigu_combo[] = {ES_U, ES_T, KC_SPC, COMBO_END};
const uint16_t PROGMEM a_circ_combo[] = {ES_A, ES_R, KC_SPC, COMBO_END};
const uint16_t PROGMEM e_circ_combo[] = {LT(_NAV, ES_E), ES_R, KC_SPC, COMBO_END};
const uint16_t PROGMEM i_circ_combo[] = {ES_I, ES_R, KC_SPC, COMBO_END};
const uint16_t PROGMEM o_circ_combo[] = {ES_O, ES_R, KC_SPC, COMBO_END};
const uint16_t PROGMEM u_circ_combo[] = {ES_U, ES_R, KC_SPC, COMBO_END};
const uint16_t PROGMEM a_trem_combo[] = {ES_A, ES_B, KC_SPC, COMBO_END};
const uint16_t PROGMEM e_trem_combo[] = {LT(_NAV, ES_E), ES_B, KC_SPC, COMBO_END};
const uint16_t PROGMEM i_trem_combo[] = {ES_I, ES_B, KC_SPC, COMBO_END};
const uint16_t PROGMEM o_trem_combo[] = {ES_O, ES_B, KC_SPC, COMBO_END};
const uint16_t PROGMEM u_trem_combo[] = {ES_U, ES_B, KC_SPC, COMBO_END};
/* const uint16_t PROGMEM a_grave_maj_combo[] = {ES_A, ES_S, OSM(MOD_LSFT), COMBO_END}; */
/* const uint16_t PROGMEM a_aigu_maj_combo[] = {ES_A, ES_T, OSM(MOD_LSFT), COMBO_END}; */
/* const uint16_t PROGMEM e_grave_maj_combo[] = {LT(_NAV, ES_E), ES_S, OSM(MOD_LSFT), COMBO_END}; */
/* const uint16_t PROGMEM e_aigu_maj_combo[] = {LT(_NAV, ES_E), ES_T, OSM(MOD_LSFT), COMBO_END}; */
const uint16_t PROGMEM c_ced_combo[] = {ES_C, ES_N, COMBO_END};
const uint16_t PROGMEM n_tild_combo[] = {ES_N, ES_D, COMBO_END};
const uint16_t PROGMEM at_combo[] = {LT(_NAV, ES_E), KC_SPC, ES_A, COMBO_END};
const uint16_t PROGMEM semicolon_combo[] = {ES_COMM, ES_DOT, COMBO_END};
const uint16_t PROGMEM underscore_combo[] = {LT(_NAV, ES_E), ES_MINS, COMBO_END};
const uint16_t PROGMEM questmark_combo[] = {LT(_NAV, ES_E), ES_COMM, COMBO_END};
const uint16_t PROGMEM exclmark_combo[] = {LT(_NAV, ES_E), ES_DOT, COMBO_END};
const uint16_t PROGMEM rev_questmark_combo[] = {LT(_NAV, ES_E), KC_SPC, ES_COMM, COMBO_END};
const uint16_t PROGMEM rev_exclmark_combo[] = {LT(_NAV, ES_E), KC_SPC, ES_DOT, COMBO_END};
/* const uint16_t PROGMEM tab_combo[] = {LT(_NAV, ES_E), KC_SPC, COMBO_END}; */
/* const uint16_t PROGMEM tab_mouse_combo[] = {KC_ACL1, KC_BTN1, COMBO_END}; */
const uint16_t PROGMEM select_L_combo[] = {KC_SPC, ES_P, COMBO_END};
const uint16_t PROGMEM cut_L_combo[] = {KC_SPC, ES_S, COMBO_END};
const uint16_t PROGMEM copy_L_combo[] = {KC_SPC, ES_R, COMBO_END};
const uint16_t PROGMEM paste_L_combo[] = {KC_SPC, ES_T, COMBO_END};
const uint16_t PROGMEM enter_L_combo[] = {OSL(_SYM), ES_V, COMBO_END};
const uint16_t PROGMEM undo_L_combo[] = {KC_SPC, KC_BSPC, COMBO_END};
const uint16_t PROGMEM delete_L_combo[] = {KC_SPC, ES_C, ES_N, ES_D, COMBO_END};
const uint16_t PROGMEM rename_L_combo[] = {KC_SPC, ES_V, COMBO_END};
const uint16_t PROGMEM select_R_combo[] = {LT(_NAV, ES_E), ES_H, COMBO_END};
const uint16_t PROGMEM cut_R_combo[] = {LT(_NAV, ES_E), ES_L, COMBO_END};
const uint16_t PROGMEM copy_R_combo[] = {LT(_NAV, ES_E), ES_A, COMBO_END};
const uint16_t PROGMEM paste_R_combo[] = {LT(_NAV, ES_E), ES_I, COMBO_END};
const uint16_t PROGMEM escape_R_combo[] = {OSM(MOD_LSFT), ES_Y, COMBO_END};
const uint16_t PROGMEM undo_R_combo[] = {LT(_NAV, ES_E), KC_DEL, COMBO_END};
const uint16_t PROGMEM rename_R_combo[] = {LT(_NAV, ES_E), ES_Y, COMBO_END};
const uint16_t PROGMEM delete_R_combo[] = {LT(_NAV, ES_E), ES_U, ES_O, ES_G, COMBO_END};
const uint16_t PROGMEM select_mouse_combo[] = {KC_ACL1, ES_P, COMBO_END};
const uint16_t PROGMEM cut_mouse_combo[] = {KC_ACL1, ES_S, COMBO_END};
const uint16_t PROGMEM copy_mouse_combo[] = {KC_ACL1, ES_R, COMBO_END};
const uint16_t PROGMEM paste_mouse_combo[] = {KC_ACL1, ES_T, COMBO_END};
const uint16_t PROGMEM undo_mouse_combo[] = {KC_ACL1, KC_BSPC, COMBO_END};
const uint16_t PROGMEM delete_mouse_combo[] = {KC_ACL1, ES_C, ES_N, ES_D, COMBO_END};
const uint16_t PROGMEM rename_mouse_combo[] = {KC_ACL1, ES_V, COMBO_END};
const uint16_t PROGMEM to_mouse_combo[] = {OSM(MOD_LSFT), OSL(_SYM), COMBO_END};
const uint16_t PROGMEM to_mouse_bis_combo[] = {KC_ACL2, KC_BTN2, COMBO_END};
const uint16_t PROGMEM to_nav_combo[] = {KC_ESCAPE, KC_ENTER, COMBO_END};
const uint16_t PROGMEM to_base_combo[] = {LT(_NAV, ES_E), KC_SPC, COMBO_END};
const uint16_t PROGMEM to_base_bis_combo[] = {KC_ACL1, KC_BTN1, COMBO_END};
const uint16_t PROGMEM to_base_tris_combo[] = {LT(_NAV, ES_E), KC_LSFT, COMBO_END};
const uint16_t PROGMEM alt_tab_L_combo[] = {ES_R, ES_S, COMBO_END};
const uint16_t PROGMEM ctl_tab_L_combo[] = {ES_R, ES_T, COMBO_END};
const uint16_t PROGMEM alt_tab_R_combo[] = {ES_A, ES_L, COMBO_END};
const uint16_t PROGMEM ctl_tab_R_combo[] = {ES_A, ES_I, COMBO_END};
const uint16_t PROGMEM caps_lock_combo[] = {KC_BSPC, KC_DEL, COMBO_END};
const uint16_t PROGMEM num_combo[] = {KC_P, KC_S, KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM mail_perso_combo[] = {ES_M, ES_A, ES_I, ES_L, OSM(MOD_LSFT), COMBO_END};
const uint16_t PROGMEM mail_pro_combo[] = {ES_M, ES_A, ES_I, ES_L, LT(_NAV, ES_E), COMBO_END};
const uint16_t PROGMEM passw1_combo[] = {ES_P, ES_S, ES_R, ES_T, KC_SPC, COMBO_END};
const uint16_t PROGMEM passw1b_combo[] = {ES_P, ES_S, ES_R, ES_T, OSL(_SYM), COMBO_END};
const uint16_t PROGMEM passw2_combo[] = {ES_I, ES_A, ES_L, ES_H, LT(_NAV, ES_E), COMBO_END};
const uint16_t PROGMEM bootloader_combo[] = {ES_Q, ES_C, ES_N, ES_D, KC_SPC, ES_U, ES_O, ES_G, ES_X, LT(_NAV, ES_E), COMBO_END};

combo_t key_combos[] = { 
  COMBO(l_ctrl_combo, OSM(MOD_LCTL)),
  COMBO(r_ctrl_combo, OSM(MOD_RCTL)),
  COMBO(l_alt_combo, OSM(MOD_LALT)),
  COMBO(r_alt_combo, OSM(MOD_LALT)),
  COMBO(l_win_combo, OSM(MOD_LGUI)),
  COMBO(r_win_combo, KC_LGUI),
  COMBO(a_grave_combo, A_GRAVE),
  COMBO(a_grave_bis_combo, A_GRAVE),
  COMBO(e_grave_combo, E_GRAVE),
  COMBO(e_grave_bis_combo, E_GRAVE),
  COMBO(i_grave_combo, I_GRAVE),
  COMBO(o_grave_combo, O_GRAVE),
  COMBO(u_grave_combo, U_GRAVE),
  COMBO(a_aigu_combo, A_AIGU),
  COMBO(e_aigu_combo, E_AIGU),
  COMBO(i_aigu_combo, I_AIGU),
  COMBO(o_aigu_combo, O_AIGU),
  COMBO(u_aigu_combo, U_AIGU),
  COMBO(a_circ_combo, A_CIRC),
  COMBO(e_circ_combo, E_CIRC),
  COMBO(i_circ_combo, I_CIRC),
  COMBO(o_circ_combo, O_CIRC),
  COMBO(u_circ_combo, U_CIRC),
  COMBO(a_trem_combo, A_TREM),
  COMBO(e_trem_combo, E_TREM),
  COMBO(i_trem_combo, I_TREM),
  COMBO(o_trem_combo, O_TREM),
  COMBO(u_trem_combo, U_TREM),
  /* COMBO(a_grave_maj_combo, A_GRAVE_MAJ), */
  /* COMBO(a_aigu_maj_combo, A_AIGU_MAJ), */
  /* COMBO(e_grave_maj_combo, E_GRAVE_MAJ), */
  /* COMBO(e_aigu_maj_combo, E_AIGU_MAJ), */
  COMBO(c_ced_combo, ES_CCED),
  COMBO(n_tild_combo, ES_NTIL),
  COMBO(at_combo, ES_AT),
  COMBO(semicolon_combo, ES_SCLN),
  COMBO(underscore_combo, ES_UNDS),
  COMBO(questmark_combo, ES_QUES),
  COMBO(exclmark_combo, ES_EXLM),
  COMBO(rev_questmark_combo, ES_IQUE),
  COMBO(rev_exclmark_combo, ES_IEXL),
  /* COMBO(tab_combo, KC_TAB), */
  /* COMBO(tab_mouse_combo, KC_TAB), */
  COMBO(select_L_combo, LCTL(ES_A)),
  COMBO(cut_L_combo, LCTL(ES_X)),
  COMBO(copy_L_combo, LCTL(ES_C)),
  COMBO(paste_L_combo, LCTL(ES_V)),
  COMBO(enter_L_combo, KC_ENTER),
  COMBO(undo_L_combo, LCTL(ES_Z)),
  COMBO(delete_L_combo, KC_DEL),
  COMBO(rename_L_combo, KC_F2),
  COMBO(select_R_combo, LCTL(ES_A)),
  COMBO(cut_R_combo, LCTL(ES_X)),
  COMBO(copy_R_combo, LCTL(ES_C)),
  COMBO(paste_R_combo, LCTL(ES_V)),
  COMBO(escape_R_combo, KC_ENTER),
  COMBO(undo_R_combo, LCTL(ES_Z)),
  COMBO(delete_R_combo, KC_DEL),
  COMBO(rename_R_combo, KC_F2),
  COMBO(select_mouse_combo, LCTL(ES_A)),
  COMBO(cut_mouse_combo, LCTL(ES_X)),
  COMBO(copy_mouse_combo, LCTL(ES_C)),
  COMBO(paste_mouse_combo, LCTL(ES_V)),
  COMBO(undo_mouse_combo, LCTL(ES_Z)),
  COMBO(delete_mouse_combo, KC_DEL),
  COMBO(rename_mouse_combo, KC_F2),
  COMBO(to_mouse_combo, TG(_MOUSE)),
  COMBO(to_mouse_bis_combo, TO(_MOUSE)),
  COMBO(to_nav_combo, TG(_NAV)),
  COMBO(to_base_combo, TO(_BASE)),
  COMBO(to_base_bis_combo, TO(_BASE)),
  COMBO(to_base_tris_combo, TO(_BASE)),  
  COMBO(alt_tab_L_combo, LM(_ALTTAB, MOD_LALT)),
  COMBO(ctl_tab_L_combo, LM(_ALTTAB, MOD_LCTL)),
  COMBO(alt_tab_R_combo, LM(_ALTTAB, MOD_LALT)),
  COMBO(ctl_tab_R_combo, LM(_ALTTAB, MOD_LCTL)),
  COMBO(caps_lock_combo, KC_CAPS_LOCK),
  COMBO(num_combo, OSL(_NUM)),
  COMBO(mail_perso_combo, MAIL_PERSO),
  COMBO(mail_pro_combo, MAIL_PRO),
  COMBO(passw1_combo, PASSW1),
  COMBO(passw1b_combo, PASSW1b),
  COMBO(passw2_combo, PASSW2),
  COMBO(bootloader_combo, QK_BOOTLOADER)
}; 


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QK_TAP_DANCE ... QK_TAP_DANCE_MAX:
            return 150;
        default:
            return TAPPING_TERM;
    }
}

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
  switch (index) {
  case A_GRAVE_BIS_CO:
  case E_GRAVE_BIS_CO:
  case C_CED_CO:
  case N_TILD_CO:  
  /* case LEFT_PAR_CO: */
  /* case RIGHT_PAR_CO: */
  case SEMICOLON_CO:
  case UNDERSCORE_CO:
  case QUESTMARK_CO:
  case EXCLMARK_CO:
  case REV_QUESTMARK_CO:
  case REV_EXCLMARK_CO:
  /* case TAB_CO: */
  case SELECT_L_CO:
  case CUT_L_CO:
  case COPY_L_CO:
  case PASTE_L_CO:
  case ENTER_L_CO:
  case UNDO_L_CO:
  case DELETE_L_CO:
  case RENAME_L_CO:
  case SELECT_R_CO:
  case CUT_R_CO:
  case COPY_R_CO:
  case PASTE_R_CO:
  case ESCAPE_R_CO:
  case UNDO_R_CO:
  case DELETE_R_CO:
  case RENAME_R_CO:
  case SELECT_MOUSE_CO:
  case CUT_MOUSE_CO:
  case COPY_MOUSE_CO:
  case PASTE_MOUSE_CO:
  case UNDO_MOUSE_CO:
  case RENAME_MOUSE_CO:
  case DELETE_MOUSE_CO:
  case CAPS_LOCK_CO:
  case ALT_TAB_L_CO:
  case CTL_TAB_L_CO:
  case ALT_TAB_R_CO:
  case CTL_TAB_R_CO:
  case TO_MOUSE_CO:
  case TO_MOUSE_BIS_CO:
  case TO_NAV_CO:
  case TO_BASE_CO:
  case TO_BASE_BIS_CO:
  case TO_BASE_TRIS_CO:
       return 30;
  default:
       return COMBO_TERM;
  }
}

bool get_combo_must_hold(uint16_t index, combo_t *combo) {
  switch (index) {
        case ALT_TAB_L_CO:
        case CTL_TAB_L_CO:
        case ALT_TAB_R_CO:
        case CTL_TAB_R_CO:
            return true;
        default:
            return false;
    }
}

/* const key_override_t egrave_key_override = ko_make_basic(MOD_MASK_LGUI, E_AIGU, E_GRAVE); */
/* const key_override_t acirc_key_override = ko_make_basic(MOD_MASK_GUI, ES_A, A_CIRC); */
const key_override_t inter_mark_key_override = ko_make_basic(MOD_MASK_SHIFT, ES_COMM, ES_QUES);
const key_override_t excl_mark_key_override = ko_make_basic(MOD_MASK_SHIFT, ES_DOT, ES_EXLM);
const key_override_t tab_override = ko_make_basic(MOD_MASK_SHIFT, KC_SPACE, KC_TAB);
const key_override_t shift_tab_override = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, S(KC_TAB));

/* // This globally defines all key overrides to be used */
const key_override_t **key_overrides = (const key_override_t *[]){
    /* &acirc_key_override, */
    &inter_mark_key_override,
    &excl_mark_key_override,
    &tab_override,
    &shift_tab_override,
    NULL // Null terminate the array of overrides!
};

/* void leader_start_user(void) { */
/*     // Do something when the leader key is pressed */
/* } */

/* void leader_end_user(void) { */
/*   if (leader_sequence_three_keys(KC_C, KC_A, KC_L)) { */
/*     SEND_STRING(SS_TAP(X_LGUI) "cal" SS_DELAY(50) SS_TAP(X_ENTER)); */
/*   } else if (leader_sequence_three_keys(KC_P, KC_A, KC_I)) { */
/*     SEND_STRING("INTLaco@612"); */
/*   } else if (leader_sequence_three_keys(KC_P, KC_A, KC_A)) { */
/*     SEND_STRING("INTLaco@123"); */
/*   } else if (leader_sequence_three_keys(KC_P, KC_A, KC_E)) { */
/*     SEND_STRING("0S(laye)R1"); */
/*   } else if (leader_sequence_four_keys(KC_P, KC_A, KC_E, KC_E)) { */
/*     SEND_STRING("00S(laye)R1"); */
/*   } else if (leader_sequence_four_keys(KC_P, KC_A, KC_E, KC_U)) { */
/*     SEND_STRING("456lai(srt)LAI"); */
/*   } */
/* } */















