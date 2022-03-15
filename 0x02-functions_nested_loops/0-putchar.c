#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i])
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
