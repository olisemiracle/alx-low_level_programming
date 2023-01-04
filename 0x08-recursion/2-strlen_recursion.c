#include "main.h"
/**
 * _strlen_recursion - finds the length of a string using recursion
 * @s: string to be checked
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s == '\0')
		return (0);
	else
		return (len + _strlen_recursion(s + 1));
}
