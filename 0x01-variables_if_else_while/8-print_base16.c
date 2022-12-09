#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This prints alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;
	int i;

	for (i = 48; i >= 48 && i <= 57; i++)
		putchar(i);
	for (ch = 'a'; ch >= 'a' && ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');

return (0);
}
