#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard out
 *
 * @filename: variable pointer
 * @letters: number of characters to read
 *
 * Return: 0 if success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, len, chr;
	char *text;

	if (filename == NULL || letters == 0)
		return (0);
	text = malloc(sizeof(char) * (letters));
	if (text == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	len = read(file, text, letters);
	if (len == -1)
	{
		free(text);
		close(file);
		return (0);
	}

	chr = write(STDOUT_FILENO, text, len);

	free(text);
	close(file);
	if (chr != len)
		return (0);
	return (len);
}
