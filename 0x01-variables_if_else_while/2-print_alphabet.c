#include <stdio.h>
/**
 * main - print a to z
 * Description: i am using putchar and loop
 * Return: zero on success
 */

int main(void)
{
	char nb = 'a';
	for (nb = 'a'; nb <= 'z'; nb++)
	{
		putchar(nb);
	}
	putchar('\n');
	return (0);
}
