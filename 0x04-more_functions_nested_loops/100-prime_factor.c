#include <stdio.h>
/**
 * main - print largest prime factor
 * Return: always 0
 */
int main(void)
{
	unsigned long int num = 612852475143, i;

	for (i = 2; i < num; i++)
	{
		if (num  % i == 0)
		{
			num = num / i;
			i--;
		}
	}
	printf("%lu\n", num);
	return (0);
}
