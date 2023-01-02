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

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
