#include "main.h"
/**
 * _strcpy - copies one string to another
 * @dest: pointer to string
 * @src: pointer to string
 * Return: pointer to string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i])
		i++;
	for (j = 0; j <= i; j++)
		dest[j] = src[j];
	return (dest);
}
