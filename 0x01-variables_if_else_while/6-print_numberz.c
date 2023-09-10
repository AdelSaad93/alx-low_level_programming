#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:print all numbers of base 10 starting from 0.
 *
 * Return: always 0
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
