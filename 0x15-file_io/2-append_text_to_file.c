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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of a file
 * @text_content: content
 *
 * Return: 1 if success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int len1;
	ssize_t b_write;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	len1 = _strlen(text_content);

	b_write = write(fd, text_content, len1);
	if (b_write == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
