#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename:  the name of the file
 * @text_content:  terminated string to add at the end of the file
 * Return: -1, 0 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
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
