#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Do not print 2 and 4
 */
void print_most_numbers(void)
{
	char numbers[] = "01356789\n";
	int i;

	for (i = 0; numbers[i] != '\0'; i++)
	{
		_putchar(numbers[i]);
	}
}
