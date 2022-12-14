#include "main.h"

/**
 * positive_or_negative - A function
 *
 * Description: This checks if a random number is positive or negative
 *
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
