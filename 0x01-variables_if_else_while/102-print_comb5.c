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
	int l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (i == k && j == l)
					{
						continue;
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!((i == 57 && j == 56) && (k == 57 && l == 57)))
					{
						putchar(',');
						putchar(' ');
					}
				}
				l = '0';
			}
		}
	}
	putchar('\n');
return (0);
}
