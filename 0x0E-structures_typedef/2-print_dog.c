#include <stddef.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function
 * struct dog: struct
 * @d: struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
}
