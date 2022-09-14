#include <stdio.h>

/**
 * main - print first 50 fibonacci number 
 * Return: 0 on success
 */
int main(void)
{
	int i = 1;
	int k = 1;
	while (i <= 50)
	{
		k += i;
		printf("%d, ", k);
		i++;
	}
	return (0);
}
