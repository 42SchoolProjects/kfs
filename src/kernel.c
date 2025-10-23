#include "kernel.h"
#include "types.h"
#include "cursor.h"
#include "io.h"
#include "writek.h"
#include "song.h"
#include "keyboard.h"

char *video = VGA_ENTRY;
char *end = VGA_END;

void kmain(void)
{
	// beep();
	// WriteString(VGA_PURPLE, "42 This is mandatory");
	// writek(VGA_PURPLE, "LnKKK est le goat\a", 18);
<<<<<<< HEAD
	writek(VGA_PURPLE, "a\n", 2);
	writek(VGA_PURPLE, "b\n", 2);
	writek(VGA_PURPLE, "c\n", 2);
	writek(VGA_PURPLE, "d\n", 2);
	writek(VGA_PURPLE, "e\n", 2);
	writek(VGA_PURPLE, "f\n", 2);
	writek(VGA_PURPLE, "g\n", 2);
	writek(VGA_PURPLE, "i\n", 2);
	writek(VGA_PURPLE, "j\n", 2);
	writek(VGA_PURPLE, "k\n", 2);
	writek(VGA_PURPLE, "l\n", 2);
	writek(VGA_PURPLE, "m\n", 2);
	writek(VGA_PURPLE, "o\n", 2);
	writek(VGA_PURPLE, "p\n", 2);
	writek(VGA_PURPLE, "q\n", 2);
	writek(VGA_PURPLE, "r\n", 2);
	writek(VGA_PURPLE, "s\n", 2);
	writek(VGA_PURPLE, "t\n", 2);
	writek(VGA_PURPLE, "u\n", 2);
	writek(VGA_PURPLE, "v\n", 2);
	writek(VGA_PURPLE, "w\n", 2);
	writek(VGA_PURPLE, "x\n", 2);
	writek(VGA_PURPLE, "y\n", 2);
	writek(VGA_PURPLE, "z\n", 2);
	writek(VGA_PURPLE, "a\n", 2);
	writek(VGA_PURPLE, "b\n", 2);
	writek(VGA_PURPLE, "c\n", 2);
	// writek(VGA_PURPLE, "te\n", 3);
	// writek(VGA_PURPLE, "je\n", 3);
=======
	// writek(VGA_PURPLE, "je\vtest\v12", 10);
>>>>>>> a4bbd68 (keyboard first commit)
	// writek(VGA_PURPLE, "LnKKK est le goat\n", 18);
	// writek(VGA_PURPLE, "LnKKK est le goat\n", 18);
	// writek(VGA_PURPLE, "LnKKK est le goat\n", 18);
	// disable_cursor();
	// UpdateCursor(10, 0);
	init_keyboard();
	// If IRQs/IDT are not yet implemented, use the polling fallback to see keyboard input
	keyboard_poll_loop();
}
