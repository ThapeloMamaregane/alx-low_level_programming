#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: Input
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, i;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	for (i = 0; i < a; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
