#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile -  read text file and print it to POSIX stdout
 *
 * @filename: name of the file
 * @letters: read number of characters
 *
 * Return: the actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int len, wrotechars;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	len = read(file, buffer, letters);
	if (len == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	wrotechars = write(STDOUT_FILENO, buffer, len);

	free(buffer);
	close(file);
	if (wrotechars != len)
		return (0);
	return (len);
}
