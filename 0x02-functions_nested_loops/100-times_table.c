#include "main.h"
/**
 * times_table - a function that print times tabe 0 to table 9
 * @n :the  number to be printed is 15  or less
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int k;

	if (n >= 0 && n < 16)
		return (-1);
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k < 100)
			{
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{

				_putchar((k / 100) + '0');
				_putchar(((k / 10) % 10) + '0');
				_putchar((k % 10) + '0');
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
