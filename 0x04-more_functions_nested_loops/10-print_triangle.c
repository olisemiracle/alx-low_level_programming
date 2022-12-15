#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: triangle size
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(' ');
			for (k = 0; k < i; k++)
				_putchar('#');
			if (i == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
