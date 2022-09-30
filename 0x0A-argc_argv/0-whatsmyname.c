#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints its name, followed by a new line.
*
* Return : Always 0
*/

int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
