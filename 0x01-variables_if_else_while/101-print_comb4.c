#include <stdio.h>
/**
 * main - a function that print a number from lowest to highest
 * Description: num xyz, yxz and zyx e.g 123 , 231 and 213 etc arent allowed
 * Return: zero on success
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i != j && j != k && i < j && j < k)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(48 + k);
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
