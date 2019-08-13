#include "holberton.h"

/**
 *create_file - creates a file
 *@filename: name of the file to create
 *@text_context: null terminated string to write to the file
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_context)
{
	int fd, w, ct;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_context != NULL)	
	{
		for (ct = 0; text_context[ct] != '\0'; ct++)
			;
		w = write(fd, text_context, ct);
		if (w == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
