#include "main.h"

/**
 * print_line - printing straight lines
 *
 * Return: void
 */


void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
