#include <stdio.h>
#include "dog.h"

/**
* print_dog -  function that prints a struct dog
*
* @d: struc of dog to print
*
* Return: void
*/
void print_dog(struct dog *d)
{

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("%s\n", d->name);
	if (d->age == 0)
		printf("nil\n");
	else
		printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("nil\n");
	else
		printf("%s\n", d->owner);

}
