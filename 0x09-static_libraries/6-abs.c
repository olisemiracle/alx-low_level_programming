#include "main.h"
/**
 * _abs - checks for positive or negative numbers
 * @n: value to be checked
 * Return: -1, 0 or 1
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-n);
	}
}
