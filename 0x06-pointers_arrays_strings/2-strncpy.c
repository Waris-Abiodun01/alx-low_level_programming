#include "main.h"
/**
 * _strncpy - a function that concantenate two strings
 * @dest: first string
 * @src: second string to be appended to des
 * @n: up ro a certain index of src
 * Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
