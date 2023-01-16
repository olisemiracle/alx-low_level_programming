#ifndef DOG
#define DOG
/**
 * struct dog - creates a struct named dog
 * @name: name of dog
 * @age: dog's age
 * @owner: name of dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#include <stdio.h>
#endif
