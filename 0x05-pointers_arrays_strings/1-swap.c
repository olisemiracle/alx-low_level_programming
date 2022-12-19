#include "main.h"
/**
 * swap_int - Swaps two integer values
 * @a: pointer to a value
 * @b: pointer to a value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
