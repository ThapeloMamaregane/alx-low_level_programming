#include "main.h"

/**
 * print_binary - prints decimal as binary
 * @n: The unsigned long int to print in binary
 *
 * Return: na
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8;
	int print = 0;

	while (i)
	{
		if (n & 1L << --i)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
