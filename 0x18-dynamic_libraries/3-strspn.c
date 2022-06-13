#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that copes memory with a constant byte
 * @s : string
 * @accept : char source
 * Return: length of a prefix substring.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	unsigned int nbr = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
				nbr++;
			j++;
		}
		i++;
	}

	return (nbr);
}
