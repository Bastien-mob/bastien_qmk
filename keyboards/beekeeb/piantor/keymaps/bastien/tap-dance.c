

/* // Tap dance functions */
/* void td_space_wheel_finished(tap_dance_state_t *state, void *user_data) { */
/*     if (state->count == 1) { */
/*         if (state->pressed) { */
/*             // Single tap held - activate layer */
/*             layer_on(_WHEEL); */
/*         } else { */
/*             // Single tap released - send space */
/*             tap_code(KC_SPC); */
/*         } */
/*     } else if (state->count >= 2) { */
/*         if (state->pressed) { */
/*             // Send space */
/*             register_code(KC_SPC); */
/*         } */
/*     } */
/* } */

/* void td_space_wheel_reset(tap_dance_state_t *state, void *user_data) { */
/*     if (state->count == 1) { */
/*         layer_off(_WHEEL); */
/*     } else { */
/*         unregister_code(KC_SPC); */
/*     } */
/* } */

/* void td_one_shot_layer_ontap_shift_onhold(tap_dance_state_t *state, void *user_data) { */
/*   if (state->pressed) { */
/*     // Held - activate shift */
/*     add_mods(MOD_BIT(KC_LSFT)); */
/*   } else { */
/*     // Single tap released - activate one shot layer  */
/*       set_oneshot_layer(_RARESYM, ONESHOT_START); */
/*   } */
/* } */

/* void td_release_shift(tap_dance_state_t *state, void *user_data) { */
/*   del_mods(MOD_BIT(KC_LSFT)); */
/* } */


tap_dance_action_t tap_dance_actions[] = {
    [TD_CIRC_DIAE] = ACTION_TAP_DANCE_DOUBLE(ES_CIRC, ES_DIAE),
    [TD_GRV_ACUT] = ACTION_TAP_DANCE_DOUBLE(ES_GRV, ES_ACUT),
    [TD_QUOTE_DBLQUOTE] = ACTION_TAP_DANCE_DOUBLE(ES_QUOT, ES_DQUO),
    //  [TD_SPACE_WHEEL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_space_wheel_finished, td_space_wheel_reset),
    //  [TD_LAYER_RARESYM_SHIFT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_one_shot_layer_ontap_shift_onhold, td_release_shift)
};

