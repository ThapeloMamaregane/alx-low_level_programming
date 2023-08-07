#include "main.h"
/**
  * create_file - creates a file with rw------- permissions
  * @filename: name for file
  * @text_content: content file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int status;
	int length;
	int file;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	for (length = 0; text_content[length]; length++)
		;
	status = write(file, text_content, length);
	if (close(file) == -1)
		return (-1);
	return (status == -1 ? -1 : 1);
}
