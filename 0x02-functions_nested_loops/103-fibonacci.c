#include <stdio.h>
/**
 * main -prints finonacci numbers
 * Return: Always 0
 */

int main(void)
{
	signed long int old = 1, new = 2, sum = 0, add = 0;

	add = new;
	sum = old + new;
	while (sum < 4000000)
	{
		if (sum % 2 == 0)
			add = add + sum;
		old = new;
		new = sum;
		sum = old + new;
	}
	printf("%ld\n", add);
		return (0);
}
