#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content
 *
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int len1;
	ssize_t b_write;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content == NULL)
	{
		len1 = 0;
		text_content = "";
	}
	else
	{
		len1 = _strlen(text_content);
	}
	b_write = write(fd, text_content, len1);

	if (b_write == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
