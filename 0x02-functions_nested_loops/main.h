#ifndef _MAIN
#define _MAIN

/**
* print_putchar - print all the char in _putchar
*
* Return: char
*/
void print_putchar(void)
{
	int i;
	char to_print[8] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		putchar(to_print[i]);
	}
	putchar('\n');
}

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n')
}
#endif
