#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	char *ptr = alphabet;

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}
