#include "main.h"
/**
 *  print_alphabet - a function call that wil print an alphabet;
 *  Return: void
 */
void print_alphabet(void)
{
	
	char la = 'a';
	for (la = 'a'; la <= 'z'; la++)
	{
		_putchar(la);
		la++;
	}
	_putchar('\n');
}
