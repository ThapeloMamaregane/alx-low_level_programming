#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - Prints calloc
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		p[count] = 0;
		count++;
	}
	return (p);
}
