#include "main.h"

/**
 * _islower -  prints 10 times the alphabet, in lowercase .
 *
 * @c: The character to be checked.
 *
 * Return: returns 1 if c is lowercase,else returns 0 .
 *
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
