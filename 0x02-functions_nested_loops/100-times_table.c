#include <stdio.h>
#include "main.h"

/**
* print_times_table - a function that prints the n times table, starting with 0
*@n : number
*/
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				k = i * j;

				if (k < 10 && j != 0)
				{
					printf(",");
					printf(" ");
					printf(" ");
					printf(" ");
				}
				else if (k >=10 && k < 100)
				{
					printf(",");
					printf(" ");
					printf(" ");
					printf("%d", i * j);
				}
			}
			printf("\n");
		}
	}
}
