#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If memory allocation fails or if s1 or s2 is NULL, returns NULL.
 *         Otherwise, returns a pointer to a newly allocated string
 *         containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int length1 = 0, length2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;

	concatenated = malloc((length1 + length2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < length2; i++, j++)
		concatenated[i] = s2[j];
	concatenated[i] = '\0';

	return (concatenated);
}

