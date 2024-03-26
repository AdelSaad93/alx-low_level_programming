#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: integer to make absolute.
 *
 * Return: n or n times negative.
 *
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);
}
