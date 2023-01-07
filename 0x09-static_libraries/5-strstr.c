#include "main.h"
/**
 * _strstr - finds the first occurrence of
 * the substring needle in the string haystack
 * @haystack: pointer to string
 * @needle: pointer to string
 * Return: pointer to sunstring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
