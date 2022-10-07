#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - function that concatenates two strings
*
* @s1: char
* @s2: char
* @n: bytes of s2
*
* Return: concatenate string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, l, i;
	char *s;

	if (s1 == NULL)
		l1 = 0;
	else
	{
		for (l1 = 0; s1[l1]; l1++)
		;
	}
	if (s2 == NULL)
		l2 = 0;
	else
	{
		for (l2 = 0; s2[l2]; l2++)
		;
	}
	if (n >= l2)
	{
		n = l2;
		l = l1 + l2 + 1;
		s = malloc(sizeof(char) * l);
	}
	else
	{
		l = l1 + n;
		s = malloc(sizeof(char) * l);
	}
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		s[l1 + i] = s2[i];
	}
	s[l1 + n] = '\0';
	return (s);
}
