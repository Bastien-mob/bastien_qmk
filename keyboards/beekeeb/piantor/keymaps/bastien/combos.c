enum combos {
  L_CTRL_CO,
  R_CTRL_CO,
  L_ALT_CO,
  R_ALT_CO,
  L_SUPER_CO,
  R_SUPER_CO,
  L_SHFT_CO,
  R_SHFT_CO,
  AT_CO,
  SEMICOLON_CO,
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
  TO_NAV_CO,
  TO_BASE_CO,
  TO_BASE_BIS_CO,
  ALT_TAB_L_CO,
  CTL_TAB_L_CO,
  ALT_TAB_R_CO,
  CTL_TAB_R_CO,
  NUM_CO,
  MAIL_PERSO_CO,
  MAIL_PRO_CO,
  BOOTLOADER_CO,
  COMBO_LENGTH
};


uint16_t COMBO_LEN = COMBO_LENGTH; // replaces the COMBO_COUNT define in config.h 

const uint16_t PROGMEM l_ctrl_combo[] = {ES_S, ES_R, ES_T, COMBO_END};
const uint16_t PROGMEM r_ctrl_combo[] = {ES_I, ES_A, ES_L, COMBO_END};
const uint16_t PROGMEM l_alt_combo[] = {ES_C, ES_N, ES_D, COMBO_END};
const uint16_t PROGMEM r_alt_combo[] = {ES_U, ES_O, ES_G, COMBO_END};
const uint16_t PROGMEM l_super_combo[] = {ES_F, ES_B, ES_M, COMBO_END};
const uint16_t PROGMEM r_super_combo[] = {ES_COMM, E_AIGU, ES_DOT, COMBO_END};
const uint16_t PROGMEM l_shft_combo[] = {MT(MOD_LCTL, KC_SPACE), ES_T, ES_R, COMBO_END};
const uint16_t PROGMEM r_shft_combo[] = {LT(_NAV, ES_E), ES_I, ES_A, COMBO_END};
const uint16_t PROGMEM at_combo[] = {LT(_NAV, ES_E), MT(MOD_LCTL, KC_SPACE), ES_A, COMBO_END};
const uint16_t PROGMEM semi_colon_combo[] = {ES_COMM, ES_DOT, COMBO_END};
const uint16_t PROGMEM select_L_combo[] = {MT(MOD_LCTL, KC_SPACE), ES_P, COMBO_END};
const uint16_t PROGMEM cut_L_combo[] = {MT(MOD_LCTL, KC_SPACE), ES_S, COMBO_END};
const uint16_t PROGMEM copy_L_combo[] = {MT(MOD_LCTL, KC_SPACE), ES_R, COMBO_END};
const uint16_t PROGMEM paste_L_combo[] = {MT(MOD_LCTL, KC_SPACE), ES_T, COMBO_END};
const uint16_t PROGMEM enter_L_combo[] = {OSL(_SYML), ES_V, COMBO_END};
const uint16_t PROGMEM undo_L_combo[] = {MT(MOD_LCTL, KC_SPACE), KC_BSPC, COMBO_END};
const uint16_t PROGMEM delete_L_combo[] = {MT(MOD_LCTL, KC_SPACE), ES_C, ES_N, ES_D, COMBO_END};
const uint16_t PROGMEM rename_L_combo[] = {MT(MOD_LCTL, KC_SPACE), ES_V, COMBO_END};
const uint16_t PROGMEM select_R_combo[] = {LT(_NAV, ES_E), ES_H, COMBO_END};
const uint16_t PROGMEM cut_R_combo[] = {LT(_NAV, ES_E), ES_L, COMBO_END};
const uint16_t PROGMEM copy_R_combo[] = {LT(_NAV, ES_E), ES_A, COMBO_END};
const uint16_t PROGMEM paste_R_combo[] = {LT(_NAV, ES_E), ES_I, COMBO_END};
const uint16_t PROGMEM escape_R_combo[] = {OSM(MOD_LSFT), ES_Y, COMBO_END};
const uint16_t PROGMEM undo_R_combo[] = {LT(_NAV, ES_E), KC_DEL, COMBO_END};
const uint16_t PROGMEM rename_R_combo[] = {LT(_NAV, ES_E), ES_Y, COMBO_END};
const uint16_t PROGMEM delete_R_combo[] = {LT(_NAV, ES_E), ES_U, ES_O, ES_G, COMBO_END};
const uint16_t PROGMEM to_nav_combo[] = {KC_ESCAPE, KC_ENTER, COMBO_END};
const uint16_t PROGMEM to_base_combo[] = {LT(_NAV, ES_E), MT(MOD_LCTL, KC_SPACE), COMBO_END};
const uint16_t PROGMEM to_base_bis_combo[] = {LT(_NAV, ES_E), KC_LSFT, COMBO_END};
const uint16_t PROGMEM alt_tab_L_combo[] = {ES_R, ES_S, COMBO_END};
const uint16_t PROGMEM ctl_tab_L_combo[] = {ES_R, ES_T, COMBO_END};
const uint16_t PROGMEM alt_tab_R_combo[] = {ES_A, ES_L, COMBO_END};
const uint16_t PROGMEM ctl_tab_R_combo[] = {ES_A, ES_I, COMBO_END};
const uint16_t PROGMEM num_combo[] = {KC_P, KC_S, KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM mail_perso_combo[] = {ES_M, ES_A, ES_I, ES_L, LT(_NAV, ES_E), COMBO_END};
const uint16_t PROGMEM mail_pro_combo[] = {ES_M, ES_A, ES_I, ES_L, OSM(MOD_LSFT), COMBO_END};
const uint16_t PROGMEM bootloader_combo[] = {ES_Q, ES_C, ES_N, ES_D, MT(MOD_LCTL, KC_SPACE), ES_U, ES_O, ES_G, ES_X, LT(_NAV, ES_E), COMBO_END};


combo_t key_combos[] = {
  COMBO(l_ctrl_combo, OSM(MOD_LCTL)),
  COMBO(r_ctrl_combo, OSM(MOD_RCTL)),
  COMBO(l_alt_combo, OSM(MOD_LALT)),
  COMBO(r_alt_combo, OSM(MOD_LALT)),
  COMBO(l_super_combo, KC_LGUI),
  COMBO(r_super_combo, OSM(MOD_LGUI)),
  COMBO(l_shft_combo, OSM(MOD_LSFT)),
  COMBO(r_shft_combo, OSM(MOD_RSFT)),
  COMBO(at_combo, ES_AT),
  COMBO(semi_colon_combo, ES_SCLN),
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
  COMBO(to_nav_combo, TG(_NAV)),
  COMBO(to_base_combo, TO(_BASE)),
  COMBO(to_base_bis_combo, TO(_BASE)),
  COMBO(alt_tab_L_combo, LM(_ALTTAB, MOD_LALT)),
  COMBO(ctl_tab_L_combo, LM(_ALTTAB, MOD_LCTL)),
  COMBO(alt_tab_R_combo, LM(_ALTTAB, MOD_LALT)),
  COMBO(ctl_tab_R_combo, LM(_ALTTAB, MOD_LCTL)),
  COMBO(num_combo, OSL(_NUM)),
  COMBO(mail_perso_combo, MAIL_PERSO),
  COMBO(mail_pro_combo, MAIL_PRO),
  COMBO(bootloader_combo, QK_BOOTLOADER)
}; 

/*uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QK_TAP_DANCE ... QK_TAP_DANCE_MAX:
            return 150;
        default:
            return TAPPING_TERM;
    }
    }*/

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
  switch (index) {
  case L_SHFT_CO:
  case R_SHFT_CO:
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
  case ALT_TAB_L_CO:
  case CTL_TAB_L_CO:
  case ALT_TAB_R_CO:
  case CTL_TAB_R_CO:
  case TO_NAV_CO:
  case TO_BASE_CO:
  case TO_BASE_BIS_CO:
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
