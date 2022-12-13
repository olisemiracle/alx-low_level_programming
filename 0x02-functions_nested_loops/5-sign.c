#include "main.h"
/**
 * print_sign - checks for positive or negative numbers
 * @n: value to be checked
 * Return: -1, 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
