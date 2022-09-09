#include <stdio.h>
/**
 * main - print a to z and A to Z
 * Description: i am using putchar and loop
 * Return: zero on success
 */

int main(void)
{
	char nb;

	for (nb = 'a'; nb <= 'z'; nb++)
	{
		putchar(nb);
	}
	for (nb = 'A'; nb <= 'Z'; nb++)
	{
		putchar(nb);
	}
	putchar('\n');
	return (0);
}
