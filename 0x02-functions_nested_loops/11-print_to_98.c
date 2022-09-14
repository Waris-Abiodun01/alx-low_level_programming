#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that print number from n to 98
 * @n : where our printing will begin
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98\n");
}
