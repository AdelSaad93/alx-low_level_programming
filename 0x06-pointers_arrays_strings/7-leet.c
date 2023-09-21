#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char leet_letters[] = "aAeEoOtTlL";
	char leet_codes[] = "443370711";

	for (int i = 0; str[i]; i++)
	{
		for (int j = 0; leet_letters[j]; j++)
		{
			if (str[i] == leet_letters[j])
			{
				str[i] = leet_codes[j];
				break;
			}
		}
	}

	return (str);
}

