#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Writes a character to the standard output
 *
 * @n: The character to print
 *
 * Return: 1 on success, -1 on error
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
