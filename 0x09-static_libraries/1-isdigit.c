#include "main.h"

/**
 * _isdigit - check the the uppercase.
 *
 * Return: Always 1 if uppercase and 0 if lower.
 *
 * @c: The number to be checked
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
