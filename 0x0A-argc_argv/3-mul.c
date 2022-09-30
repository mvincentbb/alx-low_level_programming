#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints all arguments it receives.
* @argc: argument count
* @argv: argument vector
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	if (argc)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
