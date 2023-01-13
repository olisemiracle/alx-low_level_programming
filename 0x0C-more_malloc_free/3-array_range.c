#include "main.h"
/**
 * array_range - creates an array of integers using malloc
 * @min: minimum value in array
 * @max: maximum value in array
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, j, size, *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0, j = min; i < size; i++, j++)
	{
		if (j <= max)
			*(ptr + i) = j;
	}
	return (ptr);
}
