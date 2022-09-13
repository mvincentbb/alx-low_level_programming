#include "main.h"
/**
* _isalpha - check alpha character
*
*@c: character to verify
*
* Return: 1 if lowercase or uppercase otherwise 0
*/
int _isalpha(int c)
{
	if ((c >=  97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
