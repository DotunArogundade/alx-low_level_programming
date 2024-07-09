#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long largest_factor;

	largest_factor = largest_prime_factor(number);
	printf("%ld\n", largest_factor);

	return (0);
}
