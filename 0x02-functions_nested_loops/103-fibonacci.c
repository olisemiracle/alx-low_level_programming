#include <stdio.h>
/**
 * main -prints finonacci numbers
 * Return: Always 0
 */

int main(void)
{
	signed long int old = 1, new = 2, sum = 0;

	printf("%ld, ", new);
	sum = old + new;
	while (sum < 4000000)
	{
		if (sum % 2 == 0)
	        	printf("%ld, ", sum);
		old = new;
		new = sum;
		sum = old + new;
	}
	printf("%ld\n", sum);
		return (0);
}
