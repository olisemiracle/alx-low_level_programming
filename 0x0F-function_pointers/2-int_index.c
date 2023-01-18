#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to be worked on
 * @size: size of array
 * @cmp: pointer to function
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = (cmp)(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
