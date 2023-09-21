#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";

	for (int i = 0; separators[i]; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;

	for (int i = 0; str[i]; i++)
	{
		if (is_separator(str[i]))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 'a' + 'A';
			capitalize_next = 0;
		}
		else
		{
			capitalize_next = 0;
		}
	}

	return (str);
}

