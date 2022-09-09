#include <stdio.h>
/**
 * main - print z to a
 * Description: i am using putchar and loop
 * Return: zero on success
 */

int main(void)
{
	char nb;

	for (nb = 'z'; nb >= 'a'; nb--)
	{
		putchar(nb);
	}
	putchar('\n');
	return (0);
}
