#include <stdio.h>
/**
 * main - printm 0 t0 9
 * Description: i am using putchar and loop
 * Return: zero on success
 */

int main(void)
{
	int nb = 0;

	for (nb = 0; nb <= 9; nb++)
	{
		putchar(nb + 48);
	}
	putchar('\n');
	return (0);
}
