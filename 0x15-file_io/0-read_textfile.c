#include "main.h"
/**
 * read_textfile - reads contents of a file
 * @filename: name of file to be read
 * @letters: number of bytes to be read
 * Return: number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int rbytes, pbytes, cbytes;

	fd = rbytes = pbytes = 0;
	if (filename == NULL)
		return (0);
	buffer = malloc(letters * sizeof(char));
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rbytes = read(fd, buffer, letters);
	if (rbytes == -1)
		return (0);
	pbytes = write(STDOUT_FILENO, buffer, letters);
	if (pbytes == -1)
		return (0);
	cbytes = close(fd);
	if (cbytes == -1)
		return (0);
	free(buffer);
	return (rbytes);
}
