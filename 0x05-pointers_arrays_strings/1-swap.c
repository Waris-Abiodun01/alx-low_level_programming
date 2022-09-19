#include "main.h"
/**
 * swap_int -A function that swap the value of int
 * @a: the first int to be swap
 * @b: the second int to be swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
