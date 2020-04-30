//*********//
// Structs //
//*********//
LEADER_EXTERNS();

//***********//
// Functions //
//***********//
void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_SPACE) {
      SEND_STRING(
        "    "
      );
    }
  }
}
