#include "main.h"
/**
 * _memcpy - fills a memory with a value
 * @dest: pointer to string
 * @src: value to be filled
 * @n: size of string to be filled
 * Return: pointer to string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest) = src[i];
		i++;
		++dest;
	}
	return (dest);
}
