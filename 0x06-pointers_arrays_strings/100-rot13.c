#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: The string to encode
 *
 * Return: The encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*ptr)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (*ptr == a[i])
			{
				*ptr = n[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
