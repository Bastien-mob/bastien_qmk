
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
	     TD(TD_GRV_ACUT),    ES_Q,    ES_C,  ES_N,  ES_D,   LT(_FUN, ES_K),                    LT(_MEDIA, ES_J),  ES_U,     ES_O,      ES_G,    ES_X,   XXXXXXX,
            KC_BSPC,   ES_P,    ES_S,  ES_R,  ES_T,   ES_V,                                ES_Y,      ES_I,     ES_A,     ES_L,      ES_H,       TD_QUOTE,
               KC_ESCAPE,   ES_W,    ES_F,  ES_B,  ES_M,  ES_Z,                            TD(TD_CIRC_DIAE),    ES_COMM,  E_AIGU,    ES_DOT,  ES_MINS, ES_PLUS,
                        	      KC_TAB, MT(MOD_LCTL, KC_SPACE), OSL(_SYM),            OSM(MOD_LSFT),  LT(_NAV, ES_E),  KC_ENTER
			     ),
    [_SYM] = LAYOUT_split_3x6_3(
            XXXXXXX,   XXXXXXX,   ES_CCED,   ES_NTIL,   ES_TILD,   XXXXXXX,                 ES_MORD,  ES_EQL,    ES_DQUO,   ES_QUOT,   B_QUOTE,   XXXXXXX,  
	    KC_DEL,   ES_LCBR,   ES_LABK,   ES_LBRC,   ES_LPRN,   ES_DLR,                  ES_ASTR,  ES_RPRN,   ES_RBRC,   ES_RABK,   ES_RCBR,   KC_TAB,
	    XXXXXXX,   XXXXXXX,   ES_BSLS,   ES_PIPE,   ES_SLSH,    ES_ACUT,                ES_PERC,  ES_HASH,   E_CIRC,   ES_COLN,  ES_UNDS,  ES_EURO,
                                   	    XXXXXXX, KC_PSCR, KC_LSFT,          KC_CAPS_LOCK, E_GRAVE, ES_AMPR
			     ),
    [_NAV] = LAYOUT_split_3x6_3(
            XXXXXXX,     KC_PGUP,   KC_HOME,   KC_UP,     KC_END,    KC_TRNS,                  KC_TRNS,  KC_TRNS,     KC_TRNS,     KC_TRNS,   XXXXXXX,   XXXXXXX,
	    KC_TRNS,     KC_PGDN,   KC_LEFT,   KC_DOWN,   KC_RIGHT,  C(KC_SPC),                KC_APP,   KC_TRNS,     KC_TRNS,     KC_TRNS,   XXXXXXX,   KC_TRNS,
	    XXXXXXX,   C(ES_A),   C(ES_X),   C(ES_C),   C(ES_V),   C(ES_Z),                  XXXXXXX,    XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,  XXXXXXX,
                                                      KC_TRNS,   KC_LSFT,  KC_TRNS,       KC_TRNS,  KC_TRNS, KC_TRNS
			     ),
    [_NUM] = LAYOUT_split_3x6_3(
            XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   ES_SLSH,    ES_4,     ES_5,     ES_6,     ES_ASTR,   XXXXXXX,
	    KC_TRNS,     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   ES_MINS,    ES_1,     ES_2,     ES_3,     ES_PLUS,   KC_TRNS,
	    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    ES_7,     ES_8,     ES_9,     KC_TRNS,   XXXXXXX,
                                        	    XXXXXXX,   KC_SPC,  XXXXXXX,       ES_DOT,  ES_0,  ES_COMM
			     ),
    [_FUN] = LAYOUT_split_3x6_3(
            XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    KC_F4,    KC_F5,    KC_F6,    KC_F12,    DT_UP,
	    XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    KC_F1,    KC_F2,    KC_F3,    KC_F11,    DT_PRNT,
	    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    DT_DOWN,
                                         	    XXXXXXX,   XXXXXXX,  KC_LSFT,       XXXXXXX,  XXXXXXX,  XXXXXXX
			     ),
    [_MEDIA] = LAYOUT_split_3x6_3(
            XXXXXXX,     XXXXXXX,   KC_BRID,   XXXXXXX,   KC_BRIU,   XXXXXXX,                   XXXXXXX,    XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,
	    XXXXXXX,     XXXXXXX,   KC_VOLD,   KC_MUTE,   KC_VOLU,   XXXXXXX,                   XXXXXXX,    XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,
	    XXXXXXX,   XXXXXXX,   KC_WBAK,   XXXXXXX,   KC_WFWD,   XXXXXXX,                   XXXXXXX,    XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,
                                         	    KC_MPRV,   KC_MPLY,  KC_MNXT,       XXXXXXX,  XXXXXXX,  XXXXXXX
				  ),
    [_ALTTAB] = LAYOUT_split_3x6_3(
            XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,
	    XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,
	    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                   XXXXXXX,    XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,
                                       	    XXXXXXX,   LSFT(KC_TAB),  KC_TAB,       LSFT(KC_TAB),  KC_TAB,  XXXXXXX
				   )
};




















