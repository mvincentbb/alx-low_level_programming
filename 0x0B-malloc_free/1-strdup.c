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

	while (*(s + i))
		i++;
	return (i);
}
/**
* _strdup - function that returns a pointer to a newly allocated space
*
* @str: char
*
* Return: a string that is the duplicate
*/
char *_strdup(char *str)
{
	char *dup_str;
	int len, i;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	dup_str = malloc(sizeof(char) * len);
	if (dup_str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}
	return (dup_str);
}
