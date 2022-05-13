#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: content
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0; /*file descriptor*/

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
	}

	close(fd);

	return (1);

}
