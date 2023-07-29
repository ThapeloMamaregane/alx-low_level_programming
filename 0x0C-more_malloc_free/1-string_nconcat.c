#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - prints concatenate string by n bytes;
* @s1: input string.
* @s2: input string.
* @n: len s2 string for print.
* Return: pointer to new memory allocated.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, i, e;
	char *c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	j = 0;
	while (s1[l1])
		l1++;

	c = malloc(sizeof(*c) * j + n + 1);

	if (c == NULL)
		return (NULL);

	for (i = 0, e = 0; i < (j + n); i++)
	{
		if (i < j)
		{
			c[i] = s1[i];
		}
		else
		{
			c[i] = s2[e++];
		}
	}
	c[i] = '\0';
	return (c);
}
