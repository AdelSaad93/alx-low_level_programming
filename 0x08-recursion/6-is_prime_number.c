#include "main.h"

/**
 * is_divisible - Function to check if n is divisible by any number
 * @n: The integer to check
 * @divisor: The current divisor to check
 *
 * Return: 1 if n is divisible by any divisor, 0 otherwise
 */
int is_divisible(int n, int divisor)
{
	if (divisor <= 1)
		return (0);
	if (n % divisor == 0)
		return (1);

	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - Check if an integer is a prime number
 * @n: The integer to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (!is_divisible(n, n / 2));
}
