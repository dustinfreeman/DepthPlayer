#include "keyboard.h"
#include <stdio.h>

bool IsKeyDown[KEY_ARRAY_SIZE];

const bool VERBOSE_KEY = false;

void keyDown(unsigned char key, int x, int y) {
	if (VERBOSE_KEY)
		printf("keyDown: %i, %c \n", key, key);

	if (key < KEY_ARRAY_SIZE)
		IsKeyDown[key] = true;
}

void keyUp(unsigned char key, int x, int y) {
	if (VERBOSE_KEY)
		printf("keyUp: %i, %c \n", key, key);

	if (key < KEY_ARRAY_SIZE)
		IsKeyDown[key] = false;
}