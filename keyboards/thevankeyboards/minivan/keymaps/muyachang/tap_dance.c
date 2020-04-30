//*********//
// Structs //
//*********//
enum {
  SINGLE_TAP  = 1,
  SINGLE_HOLD = 2,
  DOUBLE_TAP  = 3,
  DOUBLE_HOLD = 4,
  TRIPLE_TAP  = 5,
  TRIPLE_HOLD = 6
};

enum {
  ALT = 0
};

//***********//
// Functions //
//***********//
// Return an integer that corresponds to what kind of tap dance should be executed.
int old_state;
int cur_dance (qk_tap_dance_state_t *state) {
  if (!state->pressed)
    return 2*state->count-1; //XXXXXX_TAP
  else
    return 2*state->count; //XXXXXX_HOLD
}

// ALT
void alt_fin (qk_tap_dance_state_t *state, void *user_data) {
  old_state = cur_dance(state);
  switch (old_state) {
    case SINGLE_TAP:
      layer_on(_FUNC);
      break;
    case SINGLE_HOLD:
      layer_on(_FUNC);
      register_code(KC_LALT);
      break;
    case DOUBLE_TAP:
      break; 
    case DOUBLE_HOLD:
      break;
  }
}

void alt_rst (qk_tap_dance_state_t *state, void *user_data) {
  switch (old_state) {
    case SINGLE_TAP:
      layer_off(_FUNC);
      break;
    case SINGLE_HOLD:
      layer_off(_FUNC);
      unregister_code(KC_LALT);
      break;
    case DOUBLE_TAP:
      break;
    case DOUBLE_HOLD:
      break;
  }
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [ALT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, alt_fin, alt_rst),
};
