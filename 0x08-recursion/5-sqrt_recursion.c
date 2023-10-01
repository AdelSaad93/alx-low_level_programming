#include "main.h"

/**
 * sqrt_helper - Helper function to find the natural square root of a number.
 * @n: The number to find the square root of.
 * @i: The current divisor to check.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, returns -1.
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_helper(n, i + 1));
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 1));
}

