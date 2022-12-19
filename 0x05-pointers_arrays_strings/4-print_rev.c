#include "main.h"
/**
 * print_rev - prints the reverse of a string
 * @s: pointer to string
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	s--;
	while (len >= 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
