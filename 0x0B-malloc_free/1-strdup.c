#include "main.h"
/**
 * _strdup - duplicate a string dynamically
 * @str: string to be duplicated
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *ptr;

	while (str[len])
		len++;
	if (len == 0)
		return (NULL);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		*(ptr + i) = *(str + i);
	return (ptr);
}

