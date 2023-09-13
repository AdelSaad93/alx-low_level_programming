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
	int last_digit;

	if (n < 0)
	{
		last_digit = -1 * (n % 10);
	}
	else
		last_digit = n % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
