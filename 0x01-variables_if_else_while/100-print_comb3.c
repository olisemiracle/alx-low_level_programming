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

	for (i = 48; i < 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i == j)
			{
				continue;
			}
			else if (i > j)
			{
				continue;
			}
			else
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
return (0);
}
