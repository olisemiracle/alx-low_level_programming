#include "main.h"
/**
 * puts2 - prints the reverse of a string
 * @str: pointer to string
 * Return: void
 */

void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len])
		len++;
	while (i < len)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
