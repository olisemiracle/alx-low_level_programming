#include "main.h"
/**
 * times_table - prints 9 times table
 * Return: nothing
 */
void times_table(void)
{
	int mul;
	int k, l;

			for (k = 0; k <= 9; k++)
			{
				_putchar('0');
				for (l = 1; l <= 9; l++)
				{
					mul = k * l;

					if (l == 0)
					{
						_putchar('0' + mul);
					}
					else if (mul <= 9)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + mul);
					}
					else if (mul > 9)
					{
						_putchar(',');
						_putchar(' ');
						_putchar('0' + (mul / 10));
						_putchar('0' + (mul % 10));
					}
				}
				_putchar('\n');
			}
}
