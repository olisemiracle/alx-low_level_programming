#include "main.h"
/**
 * create_file - creates a new file
 * @filename: name of file to be created
 * @text_content: text to be written into file
 * Return: -1 on failure, 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, byte_close, byte_write = 0, len = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	byte_write = write(fd, text_content, len);
	if (byte_write == -1)
		return (-1);
	byte_close = close(fd);
	if (byte_close == -1)
		return (-1);
	return (1);
}
