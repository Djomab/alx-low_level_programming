#include "main.h"
/**
 * print_alphabet- printting the alphabet , in lowercase
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
