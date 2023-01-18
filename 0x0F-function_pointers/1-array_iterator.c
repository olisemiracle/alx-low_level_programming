#include "function_pointers.h"
/**
 * array_iterator - executes a function on each array elements
 * @array: array to be worked on
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(action)(array[i]);
		}
}
