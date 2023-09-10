#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all the letters except q and e
 *
 * Return: always 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
