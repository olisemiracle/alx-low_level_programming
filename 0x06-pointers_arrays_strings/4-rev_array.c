#include "main.h"

/**
 * reverse_array - print values of array in reverse
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int tmp[100000];
	int i;

	i = 0;
	while (i < n)
	{
		tmp[i] = a[i];
		i++;
	}
	n--;
	i = 0;
	while (n >= 0)
	{
		a[n] = tmp[i];
		n--;
		i++;
	}
}
