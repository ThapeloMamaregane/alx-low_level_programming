#include "holberton.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @a: string
 * Return: string `s` rotated
 */

char *rot13(char *a)
{
	int i;
	char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char storel[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] > 64 && a[i] < 91) || (a[i] > 96 && a[i] < 123))
		{
			a[i] = (a[i] - 65 > 25) ?
				storel[a[i] - 97] : storeh[a[i] - 65];
		}
	}
	return (a);
}
