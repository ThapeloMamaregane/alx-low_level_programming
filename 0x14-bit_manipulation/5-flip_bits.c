#include "main.h"
/**
 * flip_bits - function with two arguments
 * @n: number to compare bits
 * @m: the second bit word
 *
 * Description: returns the number of bits needed to flip
 * Return: total flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int var;
	unsigned int i = 0;

	var = n ^ m;

	while (var != 0)
	{
		if ((var & 1) == 1)
			i++;
		var = var >> 1;
	}
	return (i);
}
