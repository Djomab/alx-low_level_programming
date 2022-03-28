#include "main.h"
/**
 *_memcpy - function that copes memory with a constant byte
 * @dest : char destination
 * @src : char source
 * @n : int
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
