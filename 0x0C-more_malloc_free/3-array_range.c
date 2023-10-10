#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: int value
 */
int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);

	int *arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (int i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}

