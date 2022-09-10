#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
		 	for (k = i; i <= '9'; i++)
			{
				for (l = j + 1; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);

					if (!((i == '9' && j == '8') &&
					      (k == '9' && l == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				l = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
