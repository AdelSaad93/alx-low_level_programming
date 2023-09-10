#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:print all possible combinations of single-digit numbers.
 *
 * Return: always 0
*/
int main(void)
{
	    int num = 0;

    while (num < 10)
	{	
        putchar(num + '0');

        if (num < 9)
	{

	putchar(',');
	putchar(' ');
        
	}

        num++;
	}
	 return 0;
}
