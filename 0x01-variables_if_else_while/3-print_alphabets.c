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

	for (ch = 'a'; ch >= 'a' && ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch >= 'A' && ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

return (0);
}
