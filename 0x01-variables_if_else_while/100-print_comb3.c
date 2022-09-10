#include <stdio.h>

/**
 *main - print 00 to 99 with no duplicate digits or combos: no 11, no 10 (01)
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		for (i = (j + 1); i <= '9'; i++) /*one's ten+1*/
		{
			putchar(j);
			putchar(i);

			if (j != '8' || i != '9') /*print commas*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
