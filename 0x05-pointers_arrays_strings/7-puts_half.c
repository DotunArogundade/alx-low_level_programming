#include "main.h"
#include <stdio.h>

/**
* puts_half - Prints half of a string followed by a new line
* @str: The string to be printed
*/
void puts_half(char *str)
{
	int len = 0;
	int start, i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}

	for (i = start; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
