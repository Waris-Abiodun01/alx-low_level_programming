#include <stdio.h>

/**
 * main - print first 50 fibonacci number
 * Return: 0 on success
 */
int main(void)
{
	int sum = 0;
	int a = 0;
	int b = 1;
	int fib = 0;

	while (fib <= 4000000)
	{
		fib = a + b;
		a = b;
		b = fib;
		if ((fib % 2) == 0)
		{
			sum += fib;
		}
	}

	printf("%d\n", sum);
	return (0);
}
