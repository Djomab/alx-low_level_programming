#include "main.h"

/**
 * read_textfile - reads a file and prints it to the POSIX standard output.
 * @filename: filename
 * @letters: number of letters to read and print
 * Return: 0
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL || buffer == NULL)
		return (0);

	/*on ouvre le fichier*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Read from file */
	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Write to standard output */
	nwrite = write(STDOUT_FILENO, buffer, nread);
	if (nwrite == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (nread);
}
