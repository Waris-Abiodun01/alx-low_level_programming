#include <stdio.h>

/**
 * main - print first 50 fibonacci number
 * Return: 0 on success
 */
int main(void)
{
	int i = 1;
	long int a = 0;
	long int b = 1;
	long int fib;

	while (i <= 50)
	{
		fib = a + b;
		a = b;
		b = fib;

		printf("%lu", fib);
		if (i != 50)
			printf(", ");
		i++;
	}
	return (0);
}
