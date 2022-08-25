#include "main.h"

/**
 * read_textfile - reads a text file and prints it to posix standard output
 * @filename: name of file
 * @letters: number of letters
 *
 * Return: number of letters if success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t b_read, b_write;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
	{
		return (0);
	}
	b_read = read(fd, buff, letters);
	if (b_read = -1)
	{
		return (0);
	}
	buff[letters + 1] = '\0';
	close(fd);

	b_write = write(STDOUT_FILENO, buff, b_read);
	if (b_write = -1)
	{
		return (0);
	}
	free(buff);
	return (b_read);
}
