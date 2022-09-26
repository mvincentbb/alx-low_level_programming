#include "main.h"
#include <stddef.h>
#include <string.h>
/**
* _strchr - function that locates a character in a string
* @s: char
* @c: char
* Return: char
*/
char *_strchr(char *s, char c)
{
	int j, i, str;
	char *si = "";

	str = strlen(s);
	for (i = 0; i < str; i++)
	{
		if (c == s[i])
			return (s + i);
	}
	return (0);
}
