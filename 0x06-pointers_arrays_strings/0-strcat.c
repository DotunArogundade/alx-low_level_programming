#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*d != '\0')
	{
		d++;
	}

	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';

	return dest;
}
