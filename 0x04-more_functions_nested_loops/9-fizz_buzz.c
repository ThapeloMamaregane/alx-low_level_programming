#include <stdio.h>
#include "main.h"

/**
*main - entry point
*Description: prints the numbers 1 - 100 w/
*Fizz for multiples of 3, Buzz for multiples of 5,
*and FizzBuzz for multiples of both
*
*Return: always 0 (success)
*/

int main(void)
{
	int i;
	for(i = 1 ;i <= 100; i++)
	{
		if(i % 15 == 0)
		{
			printf(" % d fizzbuzz\n", i);
		}
		else if(i % 3 == 0)
		{
			printf(" % d fizz \n", i);
		}
		else if(i % 5 == 0)
				{
				printf(" % d buzz \n", i);
				}else
				{
				printf(" % d \n", i);
				}
	}
	printf("\n");
	return (0);
}
