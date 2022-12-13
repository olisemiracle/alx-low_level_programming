#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: value to find its last digit
 * Return: -1, 0 or 1
 */
int print_last_digit(int n)
{
	if (n > 0 || n == 0)
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	else
	{
		n = n * -1;
		_putchar(n % 10 + '0');
		return (n % 10);
	}
}
