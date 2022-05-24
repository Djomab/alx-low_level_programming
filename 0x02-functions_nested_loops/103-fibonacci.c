#include <stdio.h>

/**
 * fibonacci - calcul la suite de fib de n entiers
 * @n: nombre de termes de la suite de fib
 * Return: int
 */
int fibonacci(unsigned int n)
{
	if (n == 0 || n == 1 || n == 2)
		return (n);
	return (fibonacci(n - 1) + fibonacci(n - 2));
}

/**
 * main - finds and prints the sum of the even-valued term
 * Return: 0
 */
int main(void)
{
	int i = 2, sum = 0;

	while (fibonacci(i) < 4000000)
	{
		if (fibonacci(i) % 2 == 0)
			sum += fibonacci(i);
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
