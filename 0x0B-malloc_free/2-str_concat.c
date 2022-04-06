#include "main.h"
#include <stdlib.h>
/**
 *  str_concat - creates an array of chars, and initializes it with char
 * @s1: character
 * @s2: character
 * Return: array or null
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s3 == NULL)
		return (NULL);
	{
		while (s1[i])
		{
			s3[i] = s1[i];
			i++;
		}

		while (s2[j])
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
		s3[i] = '\0';
	}

	return (s3);

}
