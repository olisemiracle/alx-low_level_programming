#include <stdio.h>
/**
 * main -prints finonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int num, old = 1, new = 2, sum = 0;

	printf("%d, ", old);
	printf("%d, ", new);
	sum = old + new;
	for (num = 1; num < 50; num++)
	{
		printf("%d, ", sum);
		old = new;
		new = sum;
		sum = old + new;
	}
	printf("%d\n", sum);
		return (0);
}
