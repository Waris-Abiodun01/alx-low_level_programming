#include "main.h"
/**
 * main - a function that print text
 * Return: an int on success
 */
int main(void)
{
	char text[8] = "_putchar";
	int i = 0;

	while (text[i])
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
