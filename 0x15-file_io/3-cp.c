#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _errexit - print error message and exit
 * @str: error message as string
 * @file: file name of a string
 * @code: exit code
 * Return: na
 */
void _errexit(char *str, char *file, int code)
{
	dprintf(STDERR_FILENO, str, file);
	exit(code);
}

/**
 * _cp - source file to be copied to destination file
 * @file_from: source of the file
 * @file_to: the destination file
 *
 * Return: void
 */
void _cp(char *file_from, char *file_to)
{
	int i, j, num_r, num_w;
	char buffer[1024];

	i = open(file_from, O_RDONLY);
	if (i == -1)
		_errexit("Error: Can't read from file %s\n", file_from, 98);

	j = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (j == -1)
		_errexit("Error: Can't write to %s\n", file_to, 99);

	numr_r = 1024;
	while (numr_r == 1024)
	{
		numr_r = read(i, buffer, 1024);
		if (numr_r == -1)
			_errexit("Error: Can't read from file %s\n", file_from, 98);

		num_w = write(j, buffer, numr_r);

		if (num_w == -1)
			_errexit("Error: Can't write to %s\n", file_to, 99);
	}

	if (numr_r == -1)
		_errexit("Error: Can't read from file %s\n", file_from, 98);
	if (close(j) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j);
		exit(100);
	}
	if (close(i) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j);
		exit(100);
	}
}
/**
 *main - program that copies the content of a file to another file
 *@argc: number of arguments
 *@argv: arguments vector
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_cp(argv[1], argv[2]);

	return (0);
}
