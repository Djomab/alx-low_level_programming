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

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;

	return (n % 10);
}
