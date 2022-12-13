#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: limit for times table
 * Return: nothing
 */
void print_times_table(int n)
{
	int mul;
	int k, l;

	if (n >= 0 && n <= 15)
	{
		for (k = 0; k <= n; k++)
		{
			for (l = 0; l <= n; l++)
			{
				mul = k * l;
				if (l == 0)
				{
					_putchar('0' + mul);
				}
				else 
				{
					_putchar(',');
					_putchar(' ');
					if (mul <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + mul);
					}
					else if (mul > 9 && mul < 100)
					{
						_putchar(' ');
						_putchar('0' + (mul / 10));
						_putchar('0' + (mul % 10));
					}
					else if (mul >= 100)
					{
						_putchar('0' + (mul / 100));
						_putchar('0' + ((mul / 10) % 10));
						_putchar('0' + (mul % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
