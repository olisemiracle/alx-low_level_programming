#include "main.h"
/**
 * _puts - prints string to standard output
 * @str: pointer to string
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
