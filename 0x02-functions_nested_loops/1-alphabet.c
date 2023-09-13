#include "main.h"

/**
 * main - Entry Point
 *
 * Descripition:  prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
*/

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
}
