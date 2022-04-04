#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: arguments count
 * @argv: arguments value
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
