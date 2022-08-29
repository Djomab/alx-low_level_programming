#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string to convert
 * Return: int representation of s
 */

int _atoi(char *s)
{
	long number = 0;
	int i = 0, sign = 1;

    /*saut des espaces blancs et caractère alphabétique*/
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '+' || s[i] == '-' || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
    {
        if (s[i] == '-') {
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
