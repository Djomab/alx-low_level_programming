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
		printf("(nil)");
	d->name == NULL ? printf("\n Name: (nil)") : printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	d->owner == NULL ? printf("\n Owner: (nil)") : printf("Owner: %s\n", d->owner);
}
