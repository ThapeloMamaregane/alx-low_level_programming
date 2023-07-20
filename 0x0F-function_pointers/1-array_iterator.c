#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	for (s = 0; s < size; s++)
		action(array[s]);
}
