#include "main.h"
/**
 * _strchr- search for a character
 * @s: pointer to string
 * @c: value to be found
 * Return: pointer to character if successful and NULL otherwise
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
		i++;
	}
	return ('\0');
}
