#include <stdio.h>
/**
 * _strncat - function to concatenate two strings
 * @dest: Destination string
 * @src: source string
 * @n: number of characters to be appended
 * Return: pointer to appended string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	while (dest[len])
		len++;
	for (i = 0; *(src + i) != *(src + n); i++)
	{
		*(dest + len) = *(src + i);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
