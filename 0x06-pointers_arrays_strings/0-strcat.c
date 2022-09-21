#include "main.h"
/**
 * _strcat - a function that concantenate two strings
 * @dest: first string
 * @src: second string to be appended to des
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
