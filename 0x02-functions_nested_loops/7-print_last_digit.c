#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: value to find its last digit
 * Return: last digit value
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		m = m * -1;
	}
		_putchar(m + '0');
		return (m);
}
