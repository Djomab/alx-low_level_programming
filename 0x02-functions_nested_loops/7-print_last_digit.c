#include "main.h"
/**
 * print_last_digit - checks for alphabetic character.
 *
 * @n : character
 * Return: always 0
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (a < 0)
	{
		a = -a;
	}

	_putchar(a + '0');
	return (a);
}
