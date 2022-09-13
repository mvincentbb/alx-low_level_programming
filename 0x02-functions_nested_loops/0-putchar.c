#include <stdio.h>

/**
* main - print _putchar
* 
* Return: Always 0
*/
int main(void)
{
	char to_print[8] = "_putchar";
	for(int i = 0; i < 8; i++){
		putchar(to_print[i]);
	}
	putchar('\n');
	return (0);
}
