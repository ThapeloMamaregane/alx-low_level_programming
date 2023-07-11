#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function to add variables
 * @argc: number of arguments
 * @argv: arguments being passed
 * Return: Always 0 or 1
 */
int main(int argc, char **argv)
{
	int i, j, addition;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		addition += atoi(argv[i]);
	}
	printf("%i\n", addition);
	return (0);
}
