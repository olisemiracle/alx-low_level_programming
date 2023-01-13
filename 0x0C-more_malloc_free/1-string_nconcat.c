#include "main.h"
#include <string.h>
/**
 * string_nconcat - function to concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters to be concatenated from s2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, len, j, len1, len2;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	if (n >= strlen(s2))
		len2 = strlen(s2);
	else
		len2 = n;
	len = len1 + len2 + 1;
	ptr = (char *)malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(ptr + i) = *(s1 + i);
	for (i = 0, j = len1; i < len2; i++, j++)
		*(ptr + j) = *(s2 + i);
	*(ptr + j) = '\0';
	return (ptr);
}

