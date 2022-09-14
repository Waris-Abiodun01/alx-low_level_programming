#include "main.h"
/**
 * print_last_digit - check if the char is a lowercase
 * @c: character to be passed from main
 * Return: if it is lowercase return 1 , else return 0
 */
int print_last_digit(int c)
{
	if (c > 0)
		return ('0' + (c % 10));
	else
		return ('0' + ((-1 * c) % 10));
}
