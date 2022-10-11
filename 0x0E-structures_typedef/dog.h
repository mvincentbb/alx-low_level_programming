#ifndef DOG_H
#define DOG_H

/**
 * struct dog- Struct of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 *
 */
typedef struct dog dog_t;

#endif
