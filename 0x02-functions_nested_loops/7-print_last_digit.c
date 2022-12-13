#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: value to find its last digit
 * Return: -1, 0 or 1
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		n = -n;
	}
	m = n % 10;
	_putchar(m + '0');
	return (m);
}
