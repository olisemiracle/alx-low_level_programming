#include <stdio.h>
/**
 * _strcat - function to concatenate two strings
 * @dest: Destination string
 * @src: source string
 * Return: pointer to appended string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len = 0, len2 = 0;

	while (dest[len])
		len++;
	while (src[len2])
		len2++;
	for (i = 0, j = len; i <= len2; i++, j++)
		*(dest + j) = *(src + i);
	return (dest);
}
