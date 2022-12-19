#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: pointer to string
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0, n = 0;

	while (str[len])
		len++;
	if (len % 2 != 0)
		n = (len + 1) / 2;
	else
		n = len / 2;
	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
