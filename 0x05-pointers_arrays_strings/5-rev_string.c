#include "main.h"

/**
 * rev_string- updates the value it points to to 98.
 * @str : first param
 * Return: lenght of s.
 */

void rev_string(char *str)
{
	int i = 0, k = 0, temp;

	while (str[i] != '\0')
	{
		i++;
	}

	i = i - 1;
	while (k < i)
	{
		temp = str[k];
		str[k] = str[i];
		str[i] = temp;
		k++;
		i++;
	}
}
