#include "main.h"

/**
* _strpbrk - unction that searches a string for any of a set of bytes.
* @s: string
* @accept: char
*
* Return: a pointer to the byte in s that matches or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
