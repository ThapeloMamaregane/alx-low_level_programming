#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: the int to extract the last digit from
 * Return: last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		a = -1 * (n % 10);
		_putchar(a + '0');
		return (a);
	}
	else
	{
		a = n % 10;
		_putchar(a + '0');
		return (a);
	}
}
