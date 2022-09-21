#include "main.h"
/**
 * _strncat - a function that concantenate two strings
 * @dest: first string
 * @src: second string to be appended to des
 * @n: up ro a certain index of src
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
