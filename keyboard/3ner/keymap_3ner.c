#include "keymap_common.h"
#include "led.h"

#define QUERTZ 0
#define NUMPAD 1
#define BRACKETS 2
#define CLOVER 3
#define SPECIAL 4
// MOUSELAYER defined in config.h

/*all transparent
    KEYMAP(TRNS,TRNS,                                          TRNS,TRNS, \
   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS
    ),
*/

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //QUERTZ
    KEYMAP( GRV,LGUI,                                          FN26, EQL, \
    TAB,   Q,   W,   E,   R,   T,             Y,   U,   I,   O,   P,LBRC, \
    FN1,   A,   S,   D,   F,   G,             H,   J,   K,   L,SCLN, FN2, \
  LCTRL, FN3,   X,   C,   V,   B,             N,   M,COMM, DOT, FN4,FN30, \
                  LALT, FN5,BSPC, ESC, ENT, SPC, DEL,FN29
    ),
    //movement keys and NUMPAD
    KEYMAP(TRNS,TRNS,                                       PSLS,NUMLOCK, \
   TRNS,TRNS,HOME,  UP, END,PGUP,          TRNS,KP_7,KP_8,KP_9,PAST,TRNS, \
   TRNS,TRNS,LEFT,DOWN,RGHT,PGDN,          TRNS,KP_4,KP_5,KP_6,PPLS,CAPS, \
   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,KP_1,KP_2,KP_3,TRNS,RCTL, \
                  TRNS,TRNS,TRNS,TRNS,TRNS,KP_0,KP_0,PDOT
    ),
    //special characters, BRACKETS
    KEYMAP(NONUS_HASH,TRNS,                                    TRNS,TRNS, \
   TRNS,TRNS, FN8,FN20,FN21,TRNS,          FN11,NUBS, FN6,FN10,FN16,TRNS, \
   TRNS,FN13,PSLS,FN22,FN23,PAST,           FN7,FN18,FN19,SLSH,FN14,FN17, \
   TRNS,NUHS,FN14,FN24,FN25,TRNS,          RBRC,FN15,FN12, FN9,  NO,RCTL, \
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS
    ),
    //Clover
    KEYMAP( GRV,LGUI,                                          TRNS, EQL, \
    TAB,   Q,   W,   E,   R,   T,             Z,   U,   I,   O,   P,LBRC, \
   TRNS,   A,   S,   D,   F,   G,             H,   J,   K,   L,SCLN,QUOT, \
  LCTRL,TRNS,   X,   C,   V,   B,             N,   M,COMM, DOT,TRNS,RCTL, \
                  LALT,   C,   V, ESC, ENT,   N,   M,TRNS
    ),
    //SPECIAL Cursortasten, Mediatasten, Layoutwecksel
    KEYMAP(FN31,TRNS,                                          TRNS,MUTE, \
   FN28,  F1,  F2,  F3,  F4,  F5,          MPRV,MPLY,MNXT,TRNS,TRNS,VOLU, \
   TRNS,  F6,  F7,  F8,  F9, F10,          TRNS,TRNS,TRNS,  UP,RGHT,VOLD, \
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
    [1] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_BSPC),
    [2] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_QUOT),
    [3] = ACTION_LAYER_TAP_KEY(NUMPAD, KC_Z),
    [4] = ACTION_LAYER_TAP_KEY(NUMPAD, KC_SLSH),
    [5] = ACTION_LAYER_MOMENTARY(BRACKETS),
    [6] = ACTION_MODS_KEY(MOD_LSFT,KC_NONUS_BSLASH), //>
    [7] = ACTION_MODS_KEY(MOD_LSFT,KC_MINS), //?
    [8] = ACTION_MODS_KEY(MOD_LSFT,KC_SLSH), //_
    [9] = ACTION_MODS_KEY(MOD_LSFT,KC_NONUS_HASH), //'
    [10]= ACTION_MODS_KEY(MOD_LSFT,KC_0), //=
    [11]= ACTION_MODS_KEY(MOD_LSFT,KC_1), //!
    [12]= ACTION_MODS_KEY(MOD_LSFT,KC_2), //"
    [13]= ACTION_MODS_KEY(MOD_RALT,KC_MINS), //\- 
    [14]= ACTION_MODS_KEY(MOD_LSFT,KC_4), //$
    [15]= ACTION_MODS_KEY(MOD_LSFT,KC_5), //%
    [16]= ACTION_MODS_KEY(MOD_LSFT,KC_6), //&
    [17]= ACTION_MODS_KEY(MOD_RALT,KC_Q), //@
    [18]= ACTION_MODS_KEY(MOD_LSFT,KC_8), //(
    [19]= ACTION_MODS_KEY(MOD_LSFT,KC_9), //)
    [20]= ACTION_MODS_KEY(MOD_RALT,KC_8), //[
    [21]= ACTION_MODS_KEY(MOD_RALT,KC_9), //]
    [22]= ACTION_MODS_KEY(MOD_RALT,KC_7), //{
    [23]= ACTION_MODS_KEY(MOD_RALT,KC_0), //}
    [24]= ACTION_MODS_KEY(MOD_RALT,KC_NONUS_BSLASH), //|
    [25]= ACTION_MODS_KEY(MOD_RALT,KC_RBRC), //~
    [26]= ACTION_MODS_TAP_KEY(MOD_RALT, KC_MINS), //ALTGR/ß
    [27]= ACTION_DEFAULT_LAYER_SET(QUERTZ),
    [28]= ACTION_DEFAULT_LAYER_SET(CLOVER),
    [29]= ACTION_LAYER_MOMENTARY(SPECIAL),//SPECIAL layer for QWERTZ
    [30]= ACTION_FUNCTION_TAP(0), //RCTL/SPECIALlayer
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
    /*    case 1://QWERTZ Y
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
            break;*/
    }
}
