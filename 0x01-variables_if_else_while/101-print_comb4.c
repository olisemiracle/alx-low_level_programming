#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This prints numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 56; i++)
	{
		for (j = 49; j < 57; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if (i == j || j == k)
				{
				continue;
				}
				else if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
return (0);
}
