#include "main.h"
/**
 * _calloc - allocate a block of memory using malloc
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	p = (char *)ptr;
	for (i = 0; i < nmemb * size; i++)
		*(p + i) = 0;
	return (ptr);
}
