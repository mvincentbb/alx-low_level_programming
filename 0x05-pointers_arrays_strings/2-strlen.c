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
