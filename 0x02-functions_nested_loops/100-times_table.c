#include "main.h"

/**
* print_times_table - a function that prints the n times table, starting with 0
*@n : number
*/
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			printf("%d", i * j);

			if (j < n)
			{
				printf(", ");
			}
		}
		_putchar('\n');
	}
}
