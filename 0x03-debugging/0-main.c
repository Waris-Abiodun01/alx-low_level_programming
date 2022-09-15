#include <stdlib.h>
#include <time.h>

/**
 * main - a function that pass a random number and check for postive or nega
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	positive_or_negative(n);
	return (0);
}
