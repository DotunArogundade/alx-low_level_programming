#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to test the _strlen function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("The length of the string is %d\n", len);
	return (0);
}
