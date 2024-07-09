#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to the string to be set
 * @to: pointer to the new string value
 */
void set_string(char **s, char *to)
{
	*s = malloc(strlen(to) + 1);

	if (*s == NULL)
	{
		perror("Failed to allocate memory");
		exit(EXIT_FAILURE);
	}

	strcpy(*s, to);
}
