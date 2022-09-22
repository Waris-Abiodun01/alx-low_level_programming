#include "main.h"
/**
 * reverse_array - a function that print array in reverse order
 * @a: the array
 * @n: elements in the array
 */

void reverse_array(int *a, int n)
{
	int half = n / 2;
	int left, right, i;

	n = n - 1;
	for (i = 0; i < half; i++)
	{
		left = a[n - i];
		right = a[i];
		a[i] = left;
		a[n - i] = right;
	}
}
