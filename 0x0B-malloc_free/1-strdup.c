#include "main.h"
#include <string.h>
/**
 * _strdup - duplicate a string dynamically
 * @str: string to be duplicated
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	int i, len;
	char *ptr;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;
	ptr = (char *)malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		*(ptr + i) = *(str + i);
	return (ptr);
}

