#include "main.h"
/**
 * _print_rev_recursion - prints a string reverse using recursion
 * @s: string to be reversed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
