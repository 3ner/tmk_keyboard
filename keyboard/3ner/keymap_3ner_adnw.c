#include "keymap_common.h"
#include "led.h"

#define ADNW 0
#define QUERTZ 1
#define NUMPAD 2
#define BRACKETS 3
#define SPECIAL 4
// MOUSELAYER defined in ps2_mouse.h

/*all transparent
    KEYMAP(TRNS,TRNS,                                          TRNS,TRNS, \
   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS
    ),
*/

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //AdNW
    KEYMAP( GRV,LGUI,                                          BSPC, EQL, \
    TAB,   K,   U,LBRC, DOT,QUOT,             V,   G,   C,   L,   J,   F, \
    FN1,   H,   I,   E,   A,   O,             D,   T,   R,   N,   S, FN4, \
  LCTRL, FN2,   Z,SCLN,COMM,   Q,             B,   P,   W,   M, FN3,FN30, \
                  CAPS,LALT,LSFT, ESC, ENT, SPC, DEL,FN29
    ),
    //QUERTZ
    KEYMAP( GRV,LGUI,                                          FN29, EQL, \
    TAB,   Q,   W,   E,   R,   T,             Y,   U,   I,   O,   P,LBRC, \
    FN1,   A,   S,   D,   F,   G,             H,   J,   K,   L,SCLN, FN7, \
  LCTRL, FN5,   X,   C,   V,   B,             N,   M,COMM, DOT, FN6,FN30, \
                  CAPS,LALT,LSFT, ESC, ENT, SPC, DEL,RALT
    ),
/* different layout for Clover
    //Clover
    KEYMAP( GRV,LGUI,                                          FN29, EQL, \
    TAB,   Q,   W,   E,   R,   T,             Z,   U,   I,   O,   P,LBRC, \
    FN1,   A,   S,   D,   F,   G,             H,   J,   K,   L,SCLN, FN7, \
  LCTRL, FN5,   X,   C,   V,   B,             N,   M,COMM, DOT, FN6,FN30, \
                  LALT,   C,   V, ESC, ENT,   N,   M,RALT
    ),
*/
    //special characters normally on ALTGR and NUMPAD
    KEYMAP(TRNS,TRNS,                                       TRNS,NUMLOCK, \
   TRNS, DOT,   E,   8,   9,TRNS,             N,KP_7,KP_8,KP_9,TRNS,TRNS, \
     NO,MINS,PSLS,   7,   0,PAST,             B,KP_4,KP_5,KP_6,TRNS,TRNS, \
   TRNS, FN2,   Z,NONUS_BSLASH,RBRC, Q,       V,KP_1,KP_2,KP_3,  NO,TRNS, \
                  TRNS,TRNS,TRNS,TRNS,TRNS,KP_0,KP_0,TRNS
    ),
    //movement and special characters aka BRACKETS
    KEYMAP(NONUS_HASH,TRNS,                                    TRNS,TRNS, \
   TRNS,TRNS,HOME,  UP, END,PGUP,   FN11,NONUS_BSLASH,FN21,FN10,FN16,TRNS, \
   TRNS,TRNS,LEFT,DOWN,RGHT,PGDN,          FN22,FN18,FN19,SLSH,FN14,FN23, \
   TRNS,  NO,TRNS,TRNS,TRNS,TRNS,          RBRC,FN15,FN12, FN9, FN3,TRNS, \
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS
    ),
    //SPECIAL Cursortasten, Mediatasten, Layoutwecksel
    KEYMAP(FN31,TRNS,                                          TRNS,MUTE, \
   TRNS,  F1,  F2,  F3,  F4,  F5,          MPRV,MPLY,MNXT,TRNS,TRNS,VOLU, \
   FN28,  F6,  F7,  F8,  F9, F10,          TRNS,TRNS,TRNS,  UP,RGHT,VOLD, \
   FN27,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,LEFT,DOWN,RSFT,RCTL, \
                  TRNS,TRNS,TRNS,FN31,TRNS,TRNS,TRNS,TRNS
    ),
    //Mousekeys
    KEYMAP(TRNS,TRNS,                                          TRNS,TRNS, \
   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       TRNS,TRNS,MS_BTN3,TRNS,TRNS,TRNS, \
   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,    TRNS,TRNS,MS_BTN1,MS_BTN2,TRNS,TRNS, \
   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS
    ),
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_KEY(BRACKETS, KC_BSPC),
    [2] = ACTION_FUNCTION_TAP(2),
    [3] = ACTION_LAYER_TAP_KEY(BRACKETS, KC_Y),
    [4] = ACTION_FUNCTION_TAP(3),

    [5] = ACTION_FUNCTION_TAP(1),
    [6] = ACTION_LAYER_TAP_KEY(BRACKETS, KC_SLSH),
    [7] = ACTION_FUNCTION_TAP(4),
    //[4] = ACTION_MODS_TAP_KEY(MOD_LGUI,KC_RBRC),
    //[5] = ACTION_MODS_KEY(MOD_RALT,KC_8),
    //[6] = ACTION_MODS_KEY(MOD_RALT,KC_9),
    //[7] = ACTION_MODS_KEY(MOD_RALT,KC_7),
    //[8] = ACTION_MODS_KEY(MOD_RALT,KC_0),
    [9] = ACTION_MODS_KEY(MOD_LSFT,KC_NONUS_HASH),
    [10]= ACTION_MODS_KEY(MOD_LSFT,KC_0),
    [11]= ACTION_MODS_KEY(MOD_LSFT,KC_1),
    [12]= ACTION_MODS_KEY(MOD_LSFT,KC_2),
    //[13]= ACTION_MODS_KEY(MOD_LSFT,KC_3),
    [14]= ACTION_MODS_KEY(MOD_LSFT,KC_4),
    [15]= ACTION_MODS_KEY(MOD_LSFT,KC_5),
    [16]= ACTION_MODS_KEY(MOD_LSFT,KC_6),
    //[17]= ACTION_MODS_KEY(MOD_LSFT,KC_7),
    [18]= ACTION_MODS_KEY(MOD_LSFT,KC_8),
    [19]= ACTION_MODS_KEY(MOD_LSFT,KC_9),
    //[20]= ACTION_MODS_KEY(MOD_RALT,KC_NONUS_BSLASH),
    [21]= ACTION_MODS_KEY(MOD_LSFT,KC_NONUS_BSLASH),
    [22]= ACTION_MODS_KEY(MOD_LSFT,KC_MINS),
    [23]= ACTION_MODS_KEY(MOD_LSFT,KC_SLSH),

    //[26]= ACTION_LAYER_TAP_KEY(SPECIAL, KC_Y),//SPECIAL layer for AdNW
    [27]= ACTION_DEFAULT_LAYER_SET(QUERTZ),
    [28]= ACTION_DEFAULT_LAYER_SET(ADNW),
    [29]= ACTION_LAYER_TAP_KEY(SPECIAL, KC_MINS),//SPECIAL layer for QWERTZ
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
        case 1://QWERTZ Y
        case 2://ADNW X
        case 3://ADNW ß
        case 4://QWERTZ Ä
            //normal key on tap
            //Layerswitch w/ mod (RALT) on hold
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        dprint("tap interrupted\n");
                        layer_on(NUMPAD);
                        register_mods(MOD_BIT(KC_RALT));
                    }
                } else {
                    if (!(host_keyboard_leds() & (1<<USB_LED_NUM_LOCK))) {
                        register_code(KC_NUMLOCK);
                        unregister_code(KC_NUMLOCK);
                        send_keyboard_report();
                    }
                    layer_on(NUMPAD);
                    register_mods(MOD_BIT(KC_RALT));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    if(id == 2){        //AdNW X
                        register_code(KC_X);
                        unregister_code(KC_X);
                    }else if(id == 3){  //AdNW ß
                        register_code(KC_MINS);
                        unregister_code(KC_MINS);
                    }else if(id == 1){  //QWERTZ Y
                        register_code(KC_Z);
                        unregister_code(KC_Z);
                    }else{              //QWERTZ Ä
                        register_code(KC_QUOT);
                        unregister_code(KC_QUOT);
                    }
                    send_keyboard_report();
                    record->tap.count = 0;  // ad hoc: cancel tap
                } else {
                    unregister_mods(MOD_BIT(KC_RALT));
                    layer_off(NUMPAD);
                }
            }
            break;
    }
}
