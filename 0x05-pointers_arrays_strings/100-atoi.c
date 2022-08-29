#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string to convert
 * Return: int representation of s
 */

int _atoi(char *s)
{
	unsigned int number = 0;
	int i = 0, sign = 1;

    /*saut des espaces blancs et caractère alphabétique*/
	while (!('0' <= s[i] && s[i] <= '9') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -1 * sign;
		}
		i++;
	}

	while (s[i] != '\0' && '0' <= s[i] && s[i] <= '9')
	{
		number = number * 10 + (s[i] - '0');
		i++;
	}

	return (sign * number);
}
