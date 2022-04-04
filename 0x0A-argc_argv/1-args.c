#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: arguments count
 * @argv: arguments value
 * Return: always 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
