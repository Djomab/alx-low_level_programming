#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[] = "_putchar";
	int i;

	while (c[i])
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
