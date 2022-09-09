#include <stdio.h>
/**
 * main - print a to z except q and e
 * Description: i am using putchar and loop
 * Return: zero on success
 */

int main(void)
{
	char nb = 'a';

	for (nb = 'a'; nb <= 'z'; nb++)
	{
		if (nb != 'q' && nb != 'e')
		{
			putchar(nb);
		}
	}
	putchar('\n');
	return (0);
}
