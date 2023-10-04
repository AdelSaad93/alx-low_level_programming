#include <stdlib.h>
/**
 * _strdup - Duplicate a string in a newly allocated memory space.
 * @str: The string to be duplicated.
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the newly created duplicate string.
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	char *duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (int i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}

