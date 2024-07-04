#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Negative if s1 < s2, positive if s1 > s2, 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
		s1++;
		s2++;
	}

	return (*s1 - *s2);  /* Handles cases where strings differ in length */
}
