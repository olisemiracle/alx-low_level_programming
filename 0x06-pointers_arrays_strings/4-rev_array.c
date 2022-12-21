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
	int i = 0;

	n = n - 1;
	while (n > i)
	{
		printf("%d", a[n]);
		if (n != 1)
			printf(", ");
		n--;
	}
	printf("\n");
}
