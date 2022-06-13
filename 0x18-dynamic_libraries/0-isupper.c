#include "main.h"

/**
 * _isupper - check the the uppercase.
 *
 * Return: Always 1 if uppercase and 0 if lower.
 *
 * @c: The number to be checked
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
