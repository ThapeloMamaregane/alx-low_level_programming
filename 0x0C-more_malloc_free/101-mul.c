#include <stdlib.h>
#include <stdio.h>
/**
  * _isdigit - tells if the string consists of digits
  * @argv: pointer
  * Return: return 0 if all digits, 1 if not all digits.
  */
int _isdigit(char *argv)
{
	int a;

	a = 0;
	while (argv[a])
	{
		if (argv[a] >= '0' && argv[a] <= '9')
			a++;
		else
			return (1);
	}
	return (0);
}
/**
  * _atoi - converts a string of ascii digits to the values they represent
  * @s: pointer
  * Return: value
  */
int _atoi(char *s)
{
	int a, result;

	a = result = 0;
	while (s[a])
	{
		if (s[a] >= '0' && s[a] <= '9')
		{
			result *= 10;
			result += (s[a] - '0');
		}
		a++;
	}
	return (result);
}
/**
  * main - main function call
  * @argc: argument count
  * @argv: 2D array of arguments
  * Return: return 0 on success, 98 if fail
  */
int main(int argc, char *argv[])
{
	int a;

	malloc();
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (a = 1; a < argc; a++)
	{
		if (_isdigit(argv[a]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
