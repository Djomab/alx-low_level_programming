#include "main.h"
/**
 * print_to_98- checks for alphabetic character.
 *
 * @n : number
 * Return: always 0
 */
int print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			n--;
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf('%d', i);
			printf(",");
			printf(" ");
		}
	}
}
