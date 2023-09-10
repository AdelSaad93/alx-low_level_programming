#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: greater or less
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n);
	else if (lastdigit == 0)
		printf("Last digit of %i is %i and is 0\n", n);
	else if  (lastdigit < 6 && lastdigit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n);
	return (0);

}
