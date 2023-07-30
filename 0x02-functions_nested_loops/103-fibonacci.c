#include "main.h"
#include <stdio.h>

/**
 * main - main block
 * Description: Print the sum of even Fibonacci numbers up to a fib value
 * not passing 4,000,000.
 * Return: always 0 (success).
 */
int main(void)
{
	int a = 1, b = 2, total = 0;
	int c;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			total += b;

		c = b;
		b += a;
		a = b;
	}
	printf("%d\n", total);
	return (0);
}
