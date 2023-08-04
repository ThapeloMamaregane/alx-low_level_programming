#include "main.h"
/**
 * get_endianness - return the endianness of the machine
 *
 * Return: 0 if big endian, 1 if small
 */
int get_endianness(void)
{
	int i;
	char *j;

	j = (char *)&i;
	return (*j + 48);
}
