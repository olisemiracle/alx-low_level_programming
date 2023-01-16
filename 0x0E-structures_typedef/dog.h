#ifndef DOG
#define DOG
/**
 * struct dog - creates a struct named dog
 * @name: name of dog
 * @age: dog's age
 * @owner: name of dog's owner
 */
typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#endif
