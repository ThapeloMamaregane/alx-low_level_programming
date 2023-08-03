#include "main.h"

/**
 * print_binary - prints decimal as binary
 * @n: the number to print
 *
 * Return: NA
 */
void print_binary(unsigned long int n)
{
	int print = 0;
	int i = sizeof(n) * 8;

	while (i)
	{
		if (n & 1L << --i)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
