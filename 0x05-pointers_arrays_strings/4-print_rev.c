#include "main.h"
#include <unistd.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to be printed in reverse
 */
void print_rev(char *s)
{
	int len = 0;
	char *end =s;

	while (*end)
	{
		len++;
		end++;
	}

	end--;
	while (len > 0)
	{
		write(1, end, 1);
	}
	{	end--;
		len--;
	}
	write(1, "\n", 1);
}
