#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 *main - entry point
 *@ac: number of args
 *@av: args
 *Return: 0 in success
 */
int main(int ac, char **av)
{
	ssize_t r = 0, w = 0;
	int file_from, file_to;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
	do
	{
		r = read(STDOUT_FILENO, buff, 1024);
		w = write(STDOUT_FILENO, buff, r);   
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
			exit(99);
		} 
	}
	while (r == 1024);
	close(file_from);
	close(file_to);
	if ((close(file_from) == -1) && (close(file_to) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
		return (0);
}
