#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s : string
 * @accept : char source
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}

			j++;
		}

		i++;
	}

	return ('\0');
}
