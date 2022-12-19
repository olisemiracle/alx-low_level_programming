#include "main.h"
/**
 * _strlen - finds the length of a string
 * @s: pointer to string
 * Return: the value of length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
