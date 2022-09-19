#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that print a string passed from main
 * @str: string to be printed
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
