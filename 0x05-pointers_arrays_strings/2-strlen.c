#include "main.h"

/**
 * _strlen - a function that return lenght of a string
 * @s: string that was passed
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);

}
