#include "main.h"
/**
 * _pow_recursion - finds the power of a number
 * @x: base
 * @y: exponent
 * Return: power if positive, -1 if negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
