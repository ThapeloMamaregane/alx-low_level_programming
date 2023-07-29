#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - array of integers.
 * @min: input min.
 * @max: input max.
 *
 * Return: Pointer to array.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, full;

	full = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * full);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; min <= max; a++)
	{
		ptr[a] = min++;
	}
	return (ptr);
}
