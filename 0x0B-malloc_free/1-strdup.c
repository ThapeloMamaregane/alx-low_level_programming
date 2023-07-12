#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function to return ptr containing cpy of string
 * @str: string to be copied
 *
 * Return: Null for failure else return ptr.
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	s = malloc(i * sizeof(*s));
	if (s == 0)
		return (NULL);
	for (j = 0; j < i; j++)
		s[j] = str[j];
	return (s);
}
