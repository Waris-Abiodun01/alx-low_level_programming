#include "main.h"
/**
 * _islower - check if the char is a lowercase
 * @c: character to be passed from main
 * Return: if it is lowercase return 1 , else return 0
 */
int _islower(int c)
{
	if(c > 96 && c < 123)
		return (1);
	else
		return (0);
}
