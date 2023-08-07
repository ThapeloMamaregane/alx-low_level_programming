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
	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new_file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(new_file);
		return (1);
	}
	for (length = 0; text_content[len]; length++)
		;
	status = write(new_file, text_content, length);
	if (close(new_file) == -1)
		return (-1);
	return (status == -1 ? -1 : 1);
}
