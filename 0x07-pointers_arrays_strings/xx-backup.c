#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that copes memory with a constant byte
 * @s : string
 * @accept : char source
 * Return: *dest
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int count = 0;

	while (accept[i])
	{
		if (accept[i] == s[count])
			count++;
		i++;
	}

	return (count);
}
