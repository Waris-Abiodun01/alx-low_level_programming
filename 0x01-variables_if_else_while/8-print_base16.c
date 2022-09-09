#include <stdio.h>
/**
 * main - print 0 -9 , a to f base 16
 * Description: i am using putchar and loop
 * Return: zero on success
 */

int main(void)
{
	char nb;
	int i;
	for (i = 0; i <= 9; i++)
	{
		putchar(48 + i);
	}

	for (nb = 'a'; nb <= 'f'; nb++)
	{
		putchar(nb);
	}
	putchar('\n');
	return (0);
}
