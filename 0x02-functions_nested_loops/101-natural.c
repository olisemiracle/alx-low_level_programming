#include <stdio.h>
/**
 * main -prints natural numbers
 * Return: Always 0
 */

int main(void)
{
	int num, sum = 0;

		for (num = 1; num < 1024; num++)
		{
			if (num % 3 == 0 || num % 5 == 0)
				sum = sum + num;
			else
				continue;
		}
		printf("%d\n", sum);
		return (0);
}
