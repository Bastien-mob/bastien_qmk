/* static uint16_t space_count = 0; */
/* static uint16_t hold_timer = 0; */
/* static bool space_pressed = false; */

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
    
  case B_QUOTE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRC) SS_TAP(X_SPC));
    }
    break;

  case  B_DBL_QUOTE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRC) SS_TAP(X_SPC) SS_TAP(X_LBRC) SS_TAP(X_SPC));
    }
    break;
    
  case MAIL_PERSO:
    if (record->event.pressed) {
      SEND_STRING("bastien.maubert@gmail.com");
    }
    break;	

  case MAIL_PRO:
    if (record->event.pressed) {
      SEND_STRING("bastien.maubert@fastmail.fr");
    }
    break;	

  /* case SPACE_WHEEL: */
  /*   if (record->event.pressed) { */
  /*     // Key pressed */
  /*     if (space_count == 0 || timer_elapsed(hold_timer) >= TAPPING_TERM) { */
	/* // First press, or after tapping term */
	/* hold_timer = timer_read(); */
	/* space_count = 1; */
  /*     }  else { */
	/* // Second press within tapping term */
	/* space_count = 2; */
	/* register_code(KC_SPC); */
  /*     } */
  /*     space_pressed = true; */
  /*   } else { */
  /*     // Key released */
  /*     if (space_count == 1) { */
	/* // Send keycode immediately */
	/* tap_code(KC_SPC); */
  /*     } else if (space_count == 2) { */
	/* unregister_code(KC_SPC); */
	/* space_count = 0; */
  /*     } else if (space_count == 3) { */
	/* // deactivate layer */
	/* layer_off(_SYM); */
	/* space_count = 0; */
  /*     } */
  /*     space_pressed = false; */
  /*   } */
  /*   return false; */

  }
  return true;
};


/* void matrix_scan_user(void) { */
/*   if (space_pressed && space_count == 1 && timer_elapsed(hold_timer) > TAPPING_TERM_SHORT) { */
/*     // Activate layer after hold threshold */
/*     layer_on(_SYM); */
/*     space_count = 3;  */
/*   } */
/* } */
