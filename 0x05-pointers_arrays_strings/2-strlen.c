#include "Main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */
int_strlen(char *s)
{
	int length = 0

	while (*s != '0')
	{
		length++;
		s++;
	}

	return length;
}
