#include <stdio.h>

/**
 *main - prints all the number  of base 16 in lowercase
 *Return: Always 0 (Success)
 */

int main(void)
{
	int number = '0';
	int letter = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
