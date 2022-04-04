#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: arguments count
 * @argv: arguments value
 * Return: always 0
 */

int main(int argc, char **argv)
{
	printf("%s", argv[argc - 1]);
	printf("\n");
	return (0);
}
