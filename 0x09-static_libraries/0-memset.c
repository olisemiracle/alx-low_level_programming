#include "main.h"
/**
 * _memset - fills a memory with a value
 * @s: pointer to string
 * @b: value to be filled
 * @n: size of string to be filled
 * Return: pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
