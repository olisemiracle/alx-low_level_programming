#include "main.h"
/**
 * puts2 - prints string to standard output
 * @str: pointer to string
 * Return: void
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
