#include "main.h"
/**
 *  print_alphabet - a function call that wil print an alphabet;
 *  Return: void
 */
void print_alphabet(void)
{
	char la = 'a';
	int i = 0;
	while(i < 10)
	{
		for (la = 'a'; la <= 'z'; la++)
		{
			_putchar(la);
		}
		_putchar('\n');
		i++;
	}
}
