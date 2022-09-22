#include "main.h"

/**
 * _strcmp - a function that cmpare two string i they are equal or not
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 0 if equal , if s1 > s2 return negative else positive
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int k = 0;
	int j = 0;
	int q;

	while ((s1[i] == s2[i]) && s2[i] != '\0')
		i++;
	if (s1[i] == '\0')
		return (0);
	q = s1[i] -s2[i];
	while (s1[k])
		k++;
	while (s2[j])
		j++;
	if (k > j)
		return (q);
	return (q);
}
