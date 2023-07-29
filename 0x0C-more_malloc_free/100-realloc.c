#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - reallocate memory  using malloc and free
 * @ptr: pointer
 * @old_size: unsigned int type of old memory size
 * @new_size: unsigned int type for new memory size
 * Return: pointer to array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;

	if (new_size > old_size)
	{
		c = malloc(new_size);
		free(ptr);
		return (c);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		c = malloc(new_size);
		free(ptr);
		return (c);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
