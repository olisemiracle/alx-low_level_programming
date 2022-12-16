#include "main.h"
/**
 * print_number - prints integers
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int len = 0, digit, power, i, j;

	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	for (i = n; i > 0; i = i / 10)
		len++;
	len--;
	for (i = len; len > 0; len--)
	{
		power = 1;
		for (j = 1; j <= len; j++)
			power = power * 10;
		digit = n / power;
		_putchar('0' + digit);
		n = n % power;
		if (len == 1)
			_putchar('0' + n);
	}
}
