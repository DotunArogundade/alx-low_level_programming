#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to be converted to uppercase
 *
 * Return: A pointer to the resulting string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
	{
		*ptr = *ptr - 'a' + 'A';
	}
	ptr++;
	}

	return (str);
}

