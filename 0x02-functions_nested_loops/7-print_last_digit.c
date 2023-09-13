#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: integer to get last digit of .
 *
 * Return: last digit of n .
 */

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		n = -n;
	}

	lastdigit = n % 10;

	_putchar(lastdigit + '0');

	return (lastdigit);

}
