#include "main.h"

/**
  * print_alphabet_x10 - Make alphabet x10 times
  * in lowercase
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	char num;
	int i = 0;

	while (i <= 9)
	{
		for (num = 'a'; num <= 'z'; num++)
		{
			_putchar(num);
		}

		_putchar('\n');

		i++;
	}
}
