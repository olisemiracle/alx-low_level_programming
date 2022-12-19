#include "main.h"
/**
 * print_array - prints array elements
 * @a: pointer to array
 * @n: size of array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			printf("%d, ", a[i]);
			i++;

			if (i == n - 1)
			{
				printf("%d", a[i]);
				break;
			}
		}
	}
	printf("\n");
}
