#include "keymap_common.h"

#define QUERTZ 0
#define ADNW 1
#define NUMPAD 2
#define BRACKETS 3
#define SPECIAL 4
// MOUSELAYER defined in ps2_mouse.h
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //QUERTZ
    KEYMAP(   Y,   U,   I,   O,MINS, EQL, \
              H,   J,   K,   L,   P,LBRC, \
              N,   M,COMM, DOT,SCLN,QUOT, \
            FN1, DEL,RALT, ENT,FN29,FN30, \
/*links*/   GRV, FN4,   W,   E,   R,   T, \
            TAB,   Q,   S,   D,   F,   G, \
           BSPC,   A,   X,   C,   V,   B, \
          LCTRL,   Z, FN2,LALT,CAPS,LSFT
    ),
    //AdNW
    KEYMAP(   V,   G,   C,   L,MINS, EQL, \
              D,   T,   R,   N,   J,   F, \
              B,   P,   W,   M,   S,FN30, \
            FN1, DEL,RALT, ENT,FN26,FN30, \
/*links*/   GRV, FN4,   U,LBRC, DOT,QUOT, \
            TAB,   K,   I,   E,   A,   O, \
           BSPC,   H,   Z,SCLN,COMM,   Q, \
          LCTRL,   X, FN2,LALT,CAPS,LSFT
    ),
    //FN1 NUMPAD
    KEYMAP(  UP,KP_7,KP_8,KP_9,PSLS,NUMLOCK, \
           DOWN,KP_4,KP_5,KP_6,PAST,TRNS, \
           KP_0,KP_1,KP_2,KP_3,PPLS,NONUS_HASH, \
           TRNS,TRNS,TRNS,TRNS,SLSH,TRNS, \
/*links*/  TRNS,TRNS,TRNS,PGUP,TRNS,TRNS, \
           TRNS,TRNS,HOME,PGDN, END,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS, DEL,TRNS
    ),
    //FN2 BRACKETS, top-row number-shifts
    KEYMAP(FN16,FN17,FN18,FN19,FN10,TRNS, \
           TRNS,TRNS, FN7, FN8, FN5, FN6, \
           TRNS,FN20,NONUS_BSLASH,FN21,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,SLSH,TRNS, \
/*links*/  TRNS,TRNS,FN12,  UP,FN14,FN15, \
           CAPS,FN11,LEFT,DOWN,RGHT,TRNS, \
           TRNS, FN9,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS
    ),
    //SPECIAL Cursortasten, Mediatasten, Layoutwecksel
    KEYMAP(MPRV,MPLY,MNXT,TRNS,TRNS,MUTE, \
           TRNS,TRNS,TRNS,  UP,TRNS,VOLU, \
           TRNS,TRNS,LEFT,DOWN,RGHT,VOLD, \
           TRNS,TRNS,TRNS,TRNS,TRNS,RCTL, \
/*links*/  TRNS,TRNS,  F2,  F3,  F4,  F5, \
           TRNS,  F1,  F7,  F8,  F9, F10, \
           FN28,  F6,TRNS,TRNS,TRNS,TRNS, \
           FN27,TRNS,FN31,TRNS,TRNS,TRNS
    ),
    //Mousekeys
    KEYMAP(TRNS,TRNS,MS_BTN3,TRNS,TRNS,TRNS, \
           TRNS,TRNS,MS_BTN1,MS_BTN2,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
/*links*/  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS
    ),
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_KEY(NUMPAD, KC_SPC),
    [2] = ACTION_LAYER_TAP_KEY(BRACKETS, KC_ESC),
    //[3] = ACTION_LAYER_TOGGLE(3),

    [4] = ACTION_MODS_TAP_KEY(MOD_LGUI,KC_RBRC),
    [5] = ACTION_MODS_KEY(MOD_RALT,KC_8),
    [6] = ACTION_MODS_KEY(MOD_RALT,KC_9),
    [7] = ACTION_MODS_KEY(MOD_RALT,KC_7),
    [8] = ACTION_MODS_KEY(MOD_RALT,KC_0),
    [9] = ACTION_MODS_KEY(MOD_LSFT,KC_NONUS_HASH),
    [10]= ACTION_MODS_KEY(MOD_LSFT,KC_0),
    [11]= ACTION_MODS_KEY(MOD_LSFT,KC_1),
    [12]= ACTION_MODS_KEY(MOD_LSFT,KC_2),
    [13]= ACTION_MODS_KEY(MOD_LSFT,KC_3),
    [14]= ACTION_MODS_KEY(MOD_LSFT,KC_4),
    [15]= ACTION_MODS_KEY(MOD_LSFT,KC_5),
    [16]= ACTION_MODS_KEY(MOD_LSFT,KC_6),
    [17]= ACTION_MODS_KEY(MOD_LSFT,KC_7),
    [18]= ACTION_MODS_KEY(MOD_LSFT,KC_8),
    [19]= ACTION_MODS_KEY(MOD_LSFT,KC_9),
    [20]= ACTION_MODS_KEY(MOD_RALT,KC_NONUS_BSLASH),
    [21]= ACTION_MODS_KEY(MOD_LSFT,KC_NONUS_BSLASH),

    [26]= ACTION_LAYER_TAP_KEY(SPECIAL, KC_Y),//SPECIAL layer for AdNW
    [27]= ACTION_DEFAULT_LAYER_SET(QUERTZ),
    [28]= ACTION_DEFAULT_LAYER_SET(ADNW),
    [29]= ACTION_LAYER_TAP_KEY(SPECIAL, KC_SLSH),//SPECIAL layer for QWERTZ
    [30]= ACTION_FUNCTION_TAP(0),
    [31]= ACTION_LAYER_OFF(SPECIAL, ON_BOTH),
};


/*
 * user defined action function
 */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (record->event.pressed) dprint("P"); else dprint("R");
    dprintf("%d", record->tap.count);
    if (record->tap.interrupted) dprint("i");
    dprint("\n");

    switch (id) {
        case 0:
            //RCTL on keypress, activate SPECIAL layer on tap
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        dprint("tap interrupted\n");
                        register_mods(MOD_BIT(KC_RCTL));
                    }
                } else {
                    register_mods(MOD_BIT(KC_RCTL));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    layer_on(SPECIAL);
                    record->tap.count = 0;  // ad hoc: cancel tap
                    unregister_mods(MOD_BIT(KC_RCTL));
                } else {
                    unregister_mods(MOD_BIT(KC_RCTL));
                }
            }
            break;
    }
}
