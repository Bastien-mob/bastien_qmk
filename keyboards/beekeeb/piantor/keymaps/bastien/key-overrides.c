
const key_override_t inter_mark_key_override = ko_make_basic(MOD_MASK_SHIFT, ES_COMM, ES_QUES);
const key_override_t excl_mark_key_override = ko_make_basic(MOD_MASK_SHIFT, ES_DOT, ES_EXLM);
/*const key_override_t tab_override = ko_make_basic(MOD_MASK_SHIFT, KC_DEL, KC_TAB);*/
/*const key_override_t shift_tab_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, S(KC_TAB));*/

/* // This globally defines all key overrides to be used */
const key_override_t *key_overrides[] = {
    &inter_mark_key_override,
    &excl_mark_key_override
};
