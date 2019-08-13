#include "holberton.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: name of file
 *@text_content: null terminated string to add
 *Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, ct;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (ct = 0; text_content[ct] != '\0'; ct++)
			;
		w = write(fd, text_content, ct);
		if (w == -1)
			return (-1);
	}

	close(fd);
	return (1);

}
