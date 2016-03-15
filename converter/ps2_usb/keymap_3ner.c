#include "keymap_common.h"
#define NUMPAD 1
#define BRACKETS 2


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: default
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.     ,-----------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|     |Pwr|Slp|Wak|
     * `---'   `---------------' `---------------' `---------------' `-----------'     `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backspa| |Ins|Hom|PgU| |NmL|  /|  *|  -|
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]| Ret | |Del|End|PgD| |  7|  8|  9|   |
     * |------------------------------------------------------     | `-----------' |-----------|  +|
     * |CapsLo|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  #|    |               |  4|  5|  6|   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |Shif|  <|  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /|Shift     |     |Up |     |  1|  2|  3|   |
     * |-----------------------------------------------------------| ,-----------. |-----------|Ent|
     * |Ctrl |Gui |Alt |         Space         |Alt |Gui |Menu|Ctrl| |Lef|Dow|Rig| |      0|  .|   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */
    KEYMAP_ISO(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,BRK,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,          DEL, END, PGDN,    P7,  P8,  P9,
    FN1, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, FN7,NUHS,ENT,                         P4,  P5,  P6,  PPLS,
    LSFT, FN5,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT,  FN6,     RSFT,          UP,           P1,  P2,  P3,
    LCTL,LGUI,LALT,          SPC,                     RALT,RGUI,APP, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),

    //special characters normally on ALTGR and NUMPAD
    KEYMAP_ISO(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,BRK,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    MPRV,MPLY,MNXT,MUTE,
    TAB,DOT,  E,   8,   9,   T,   N,KP_7,KP_8,KP_9,   P,   LBRC,RBRC,          DEL, END, PGDN,    P7,  P8,  P9,
    NO,MINS,PSLS,  7,   0,PAST,   B,KP_4,KP_5,KP_6,   SCLN, FN7,NUHS,ENT,                         P4,  P5,  P6,  VOLU,
    LSFT, FN5,Z,   Z,NUBS,RBRC,   B,   V,KP_1,KP_2,  KP_1,   NO,     RSFT,          UP,           P1,  P2,  P3,
    LCTL,LGUI,LALT,         KP_0,                     RALT,RGUI,APP, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,VOLD
    ),
    
    //movement and special chars aka BRACKETS
    KEYMAP_ISO(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,BRK,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, Q,HOME,  UP, END,PGUP,FN11,NUBS,FN21,FN10,FN16,   LBRC,RBRC,          DEL, END, PGDN,    P7,  P8,  P9,
    FN1, A,LEFT,DOWN,RGHT,PGDN,FN22,FN18,FN19,SLSH,   FN14,FN23,NUHS,ENT,                         P4,  P5,  P6,  PPLS,
    LSFT,  NO,Z,   X,   C,   V,   B,RBRC,FN15,FN12  , FN9,  FN6,     RSFT,          UP,           P1,  P2,  P3,
    LCTL,LGUI,LALT,          SPC,                     RALT,RGUI,APP, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),

};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_KEY(BRACKETS, KC_CAPS),

    [5] = ACTION_FUNCTION_TAP(1),
    [6] = ACTION_LAYER_TAP_KEY(BRACKETS, KC_SLSH),
    [7] = ACTION_FUNCTION_TAP(4),
    [9] = ACTION_MODS_KEY(MOD_LSFT,KC_NONUS_HASH),
    [10]= ACTION_MODS_KEY(MOD_LSFT,KC_0),
    [11]= ACTION_MODS_KEY(MOD_LSFT,KC_1),
    [12]= ACTION_MODS_KEY(MOD_LSFT,KC_2),

    [14]= ACTION_MODS_KEY(MOD_LSFT,KC_4),
    [15]= ACTION_MODS_KEY(MOD_LSFT,KC_5),
    [16]= ACTION_MODS_KEY(MOD_LSFT,KC_6),

    [18]= ACTION_MODS_KEY(MOD_LSFT,KC_8),

    [19]= ACTION_MODS_KEY(MOD_LSFT,KC_9),
    [21]= ACTION_MODS_KEY(MOD_LSFT,KC_NONUS_BSLASH),
    [22]= ACTION_MODS_KEY(MOD_LSFT,KC_MINS),
    [23]= ACTION_MODS_KEY(MOD_LSFT,KC_SLSH),

};


void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (record->event.pressed) dprint("P"); else dprint("R");
    dprintf("%d", record->tap.count);
    if (record->tap.interrupted) dprint("i");
    dprint("\n");

    switch (id) {
        case 1://QWERTZ <
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
                    layer_on(NUMPAD);
                    register_mods(MOD_BIT(KC_RALT));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    if(id == 1){  //QWERTZ Y
                        register_code(KC_NUBS);
                        unregister_code(KC_NUBS);
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
