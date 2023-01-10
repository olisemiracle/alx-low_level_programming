#include "main.h"
#include <string.h>
/**
 * str_concat - function to concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, len, j, len1, len2;
	char *ptr;

	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2 + 1;
	ptr = (char *)malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(ptr + i) = *(s1 + i);
	for (i = 0, j = len1; i <= len2; i++, j++)
		*(ptr + j) = *(s2 + i);
	return (ptr);
}

