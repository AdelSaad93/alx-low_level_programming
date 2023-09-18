#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
		*a = d;
		*b = c;

}
