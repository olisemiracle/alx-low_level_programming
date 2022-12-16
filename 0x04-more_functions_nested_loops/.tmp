#include "main.h"

#define TEN 10
#define ZERO 0
#define ONE 1
/**
 * print_number - prints integers
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int len = ZERO, digit, power, i, j, positive = n;

	if (positive == ZERO)
		_putchar('0');
	else
	{
		if (positive < ZERO)
		{
			_putchar('-');
			positive = positive * -ONE;
		}
		for (i = positive; i > ZERO; i = i / TEN)
			len++;
		len--;
		for (i = len; len > ZERO; len--)
		{
			power = ONE;
			for (j = ONE; j <= len; j++)
				power = power * TEN;
			digit = positive / power;
			_putchar('0' + digit);
			positive = positive - (digit * power);
			if (len == ONE)
				_putchar('0' + positive);
		}
	}
}
