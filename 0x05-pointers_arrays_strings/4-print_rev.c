#include "main.h"
/**
 * print_rev - prints the reverse of a string
 * @s: pointer to string
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
