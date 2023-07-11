#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: incoming argument
 * @argv: incoming argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
	{

	 int sum;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = (int) *argv[1] * (int) *argv[2];

	printf("%d\n", sum);

	return (0);

	}
