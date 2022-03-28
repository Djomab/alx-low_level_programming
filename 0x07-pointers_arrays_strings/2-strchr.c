#include "main.h"
#include <stdio.h>
/**
 *_strchr - function that copes memory with a constant byte
 * @s : string
 * @c : char source
 * Return: *dest
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0' && *s != c; ++s)
		;
	return (*s == c ? (char *) s : NULL);
}
