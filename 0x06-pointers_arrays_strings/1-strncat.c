#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to copy from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;

	while (*d != '\0')
	{
		d++;
	}

	while (n > 0 && *src != '\0')
	{
	*d = *src;
	d++;
	src++;
	n--;
	}

	*d = '\0';

	return (dest);
}
