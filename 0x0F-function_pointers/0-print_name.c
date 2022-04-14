#include<stddef.h>
/**
 * print_name - a function ...
 * @name: the chaine
 * @f: the function
 *
 * Return: 1 or 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}

