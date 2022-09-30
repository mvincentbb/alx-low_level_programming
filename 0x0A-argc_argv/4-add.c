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
	int sum, i;

	if (argv && argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(atoi(argv[i]) == 0))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (0);
			}
		}
		if (i == argc)
			printf("%d\n", sum);
	}
	return (0);
}
