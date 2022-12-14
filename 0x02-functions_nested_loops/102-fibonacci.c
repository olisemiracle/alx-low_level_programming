#include <stdio.h>
/**
 * main -prints finonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int num;
	signed long int old = 1, new = 2, sum = 0;

	printf("%ld, ", old);
	printf("%ld, ", new);
	sum = old + new;
	for (num = 3; num < 50; num++)
	{
		printf("%ld, ", sum);
		old = new;
		new = sum;
		sum = old + new;
	}
	printf("%ld\n", sum);
		return (0);
}
