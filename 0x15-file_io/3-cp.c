#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: arguement vector
* Return: no return
*/

int main(int argc, char *argv[])
{
int from_file, to_file;
int i = 1024, j = 0;
char buf[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp from_file to_file\n"), exit(97);
from_file = open(argv[1], O_RDONLY);
if (from_file == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
to_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (to_file == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(from_file), exit(99);
}
while (i == 1024)
{
	i = read(from_file, buf, 1024);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = write(to_file, buf, i);
	if (j < i)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(file_from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

if (close(to_file) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_file), exit(100);

return (0);
}
