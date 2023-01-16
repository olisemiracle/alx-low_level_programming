#include "dog.h"
/**
 * init_dog - initializes the struct dog
 * @d: pointer of type struct dog
 * @name: name of dog
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
