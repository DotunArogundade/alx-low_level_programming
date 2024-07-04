/**
 * leet - encodes a string into 1337 (leet) speak.
 * @str: The string to encode.
 *
 * Return: The encoded string.
 */
char *leet(char *str)
{
	char leet_chars[] = "aAeEoOtTlL";
	char leet_replacements[] = "4433007711";
	char *ptr = str;
	int i;

	while (*ptr)
	{
		for (i = 0; leet_chars[i]; i++)
		{
			if (*ptr == leet_chars[i])
			{
				*ptr = leet_replacements[i];
			break;
			}
		}
		ptr++;
	}

	return (str);
}
