#include "davesmacropad.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_F13),

	KEYMAP(
		KC_TRNS),

	KEYMAP(
		KC_TRNS),

	KEYMAP(
		KC_TRNS),

	KEYMAP(
		KC_TRNS),

	KEYMAP(
		KC_TRNS),

	KEYMAP(
		KC_TRNS),

	KEYMAP(
		KC_TRNS),

	KEYMAP(
		KC_TRNS),

	KEYMAP(
		KC_TRNS),

	KEYMAP(
		KC_TRNS),

	KEYMAP(
		KC_TRNS),

	KEYMAP(
		KC_TRNS),

	KEYMAP(
		KC_TRNS),

	KEYMAP(
		KC_TRNS),

	KEYMAP(
		KC_TRNS)

};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Dave is the best"), false);

    /*switch (get_highest_layer(layer_state)) {
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("I am the best"), false);
    }*/

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    return false;
}
#endif