#include "main.h"
/**
 *print_alphabet_x10 - function that prints 10 times the alphabet,
 *in lowercase, followed by a new line.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
		_putchar('\n');
	}
}
