#include "main.h"

/**
 * print_binary - prints decimal as binary
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8, printed = 0;

	while (size)
	{
		if (n & 1L << --size)
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
