#include <stdio.h>
/**
 * main - a function that print a number from lowest to highest
 * Description: num xy and yx e.g 12 and 21 are considerd to be a repeated num;
 * Return: zero on success
 */
int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i != j && i < j)
			{
				putchar(48 + i);
				putchar(48 + j);
				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
