#include "main.h"
/**
 * malloc_checked - allocate a memory using malloc
 * @b: size of memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
