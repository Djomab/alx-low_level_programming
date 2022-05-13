#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int fd = 0;
	char *filename = "./text";
	char *content = "Bonjour Djo/n";
	size_t length = 12;

	fd = open(filename, O_WRONLY);

	write(fd, content, length);

	close(fd);

	return(0);
}
