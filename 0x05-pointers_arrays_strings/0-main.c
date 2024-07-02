#include "main.h"

/**
 * main - Entry point to test the reset_to_98 function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 50;

	reset_to_98(&num);

	_putchar('0' + (num / 10));
	_putchar('0' + (num % 10));
	_putchar('n');

	return (0);
}
