#include <stdlib.h>
#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: The string to get the length
 *
 * Return: length of @s.
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (*(s + i))
	i++;
	return (i);
}

/**
* str_concat - function that concatenates two strings
*
* @s1: char
* @s2: char
*
* Return: returns a concatenates string from s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
	int lenT, len1, len2, i, j;
	char *str;

	if (s1 == NULL && s2 == NULL)
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
		free(str);
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	lenT = len1 + len2;
	str = malloc(sizeof(char) * lenT);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < (len1 - 1) ; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		str[i + j] = s2[j];
	}
	return (str);
	free(str);
}
