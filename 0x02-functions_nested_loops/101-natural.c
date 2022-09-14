#include <stdio.h>
/**
 * main - a function that add  the multiple 3 and 5 below 1024
 * Return: 1 on success
 */
int main(void)
{

	int i = 1;
	int k = 0;

	while (i < 1024)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			k += i;
		}
		i++;
	}
	printf("%d\n", k);
}
