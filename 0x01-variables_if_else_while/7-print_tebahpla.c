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

	for (ch = 'z'; ch <= 'z' && ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

return (0);
}
