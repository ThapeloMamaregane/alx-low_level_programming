#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - creates an array of integers
 * @b: input
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	ptr = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
