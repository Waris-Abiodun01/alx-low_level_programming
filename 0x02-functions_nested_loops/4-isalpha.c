#include "main.h"
/**
 * _isalpha - check if the char is a lowercase
 * @c: character to be passed from main
 * Return: if it is lowercase return 1 , else return 0
 */
int _isalpha(int c)
{
	if ((c > 48 && c < 59) || (c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
