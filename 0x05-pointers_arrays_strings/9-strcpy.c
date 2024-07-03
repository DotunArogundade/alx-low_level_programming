#include "main.h"
#include <stdio.h>

/**
 * strcpy - Copies the string pointed to by the src, including the nul byte,
 * to the buffer pointed to by dest.
 * @dest: The destination buffer where the string is copied to.
 * @src: The source string to be copied
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;
	char *start = dest;

	while (src[i])
	{
		start[i] = src[i];
		i++;
	}
	start[i] = '\0';
	return (start);
}
