#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	puts(s1);
	puts(s2);
	ptr = _strcat(s1, s2);
	puts(s1);
	puts(s2);
	puts(ptr);
	
	return (0);
}
