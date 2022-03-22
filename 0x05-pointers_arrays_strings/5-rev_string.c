#include "main.h"

/**
 * print_rev- updates the value it points to to 98.
 * @str : first param
 * Return: lenght of s.
 */

void print_rev(char *str)
{
	int i = 0, k = 0, temp;

	while (str[i] != '\0')
	{
		i++;
	}

	i = i - 1;
	while (k < i)
	{
		temp = s[k];
		s[k] = s[i];
		s[i] = temp;
		k++;
		i++;
	}
}
