#include "main.h"

/**
 * append_text_to_file - that appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int letter;
	int file;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i == -1)
		return (-1);

	if (text_content)
	{
		for (letter = 0; text_content[letter]; letter++)
			;

		file = write(i, text_content, letter);

		if (file == -1)
			return (-1);
	}

	close(i);

	return (1);
}
