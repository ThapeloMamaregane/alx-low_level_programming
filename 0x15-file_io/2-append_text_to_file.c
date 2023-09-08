#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name for file
 * @text_content: content to append, if NULL, do not append
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	char *p;
	int file;
	ssize_t len = 0, inlen = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (inlen = 0, p = text_content; *p; p++)
			inlen++;
		len = write(file, text_content, inlen);
	}

	if (close(file) == -1 || inlen != len)
		return (-1);
	return (1);
}
