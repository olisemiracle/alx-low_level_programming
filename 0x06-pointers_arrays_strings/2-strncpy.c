#include <stdio.h>
/**
 * _strncpy - function to copy from string to another
 * @dest: Destination string
 * @src: source string
 * @n: number of characters to be copied
 * Return: pointer to copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[len])
		len++;
	if (len < n)
	{
		while (i < len)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
