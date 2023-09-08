#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: contents of the file. If NULL, create an empty file
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int letters;
	int j;

	if (!filename)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (i == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	j = write(i, text_content, letters);

	if (j == -1)
		return (-1);

	close(i);

	return (1);
}
