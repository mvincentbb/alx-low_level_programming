#include "dog.h"
/**
* init_dog -  function that initialize a variable of type struct dog
*
* @d: dog you want to creaate
* @name: name of the dog
* @age: age of the dog
* @owner: name of the owner
*
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
