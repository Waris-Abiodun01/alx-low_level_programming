#include "main.h"
/**
 * _print_sign - check if the char is a lowercase
 * @c: character to be passed from main
 * Return: if it is lowercase return 1 , else return 0
 */
int print_sign(int n);
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if(c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}