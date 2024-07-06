#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	char *ptr;
	int i;

	for (i = 0; i < 10; i++)
	{
		ptr = alphabet;
		while (*ptr)
		{
			_putchar(*ptr);
			ptr++;
		}
		_putchar('\n');
	}
}
