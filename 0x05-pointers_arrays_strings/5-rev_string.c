#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that print a string in reversed order
 * @s: string to be printed
 */
void rev_string(char *s)
{
	int i = 0;
	int f = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (f = 0; i >= 0; i--, f++)
	{
		s[f] = s[i];
	}
	s[f] ='\0';
}
