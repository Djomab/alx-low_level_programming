#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name
 * @argc: arguments count
 * @argv: arguments value
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int multiplication;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	multiplication = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multiplication);

	return (0);
}
