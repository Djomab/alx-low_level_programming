#include "main.h"
#include <stdlib.h>

/**
 * fizzbuzz - prints the numbers, from 0 to 9 except 2 and 4
  * Return: void
 *
 */
void fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{

			printf("Fizz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	_putchar('\n');
}