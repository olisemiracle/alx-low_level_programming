#include "main.h"
/**
 * malloc_checked - allocate a memory using malloc
 * @b: size of memory
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i, old, new, *ptr1;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		return (ptr1);
	}
	if (new_size == 0)
	{
		free (ptr);
		return (NULL);
	}

	old = old_size / sizeof(int);
	new = new_size / sizeof(int); 
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old; i++)
			*(ptr1 + i) =(int *)*(ptr + i);
	}
	else if (old_size > new_size)
	{
		for (i = 0; i < new; i++)
			*(ptr1 + i) = *(ptr + i);
	}
	free(ptr);
	return (ptr1);
}
