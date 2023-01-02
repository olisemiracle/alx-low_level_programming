#include "main.h"
/**
 * _strspn- search for characters
 * @s: pointer to string
 * @accept: value to be found
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (len);
}
