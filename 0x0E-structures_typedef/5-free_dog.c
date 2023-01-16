#include "dog.h"
/**
 * free_dog - frees the struct dog_t
 * @d: struct to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
