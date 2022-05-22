#include <stdio.h>
#include "main.h"

/**
 * _strlen- calcul la taile d'un string
 * @b: string
 * Return: taile
 */
int _strlen(const char *b)
{
	int len = 0;

	while (*b)
	{
		b++;
		len++;
	}
	return (len);
}

/**
 * _pow - calcule la puissance d'un nombre 2 par défaut
 * @puissance: la puissance
 * Return: int
 */
unsigned int _pow(int puissance)
{
	if (puissance == 0)
		return (1);

	return (2 * _pow(puissance - 1));
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, len;
	unsigned int converted_num = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	while (*b)
	{
		if ((*b != '0' && *b != '1'))
		{
			return (0);
		}

		if (*b == '1')
			converted_num = converted_num + (_pow(len - 1));
		i++;
		b++;
		len--;
	}

	return (converted_num);

}
