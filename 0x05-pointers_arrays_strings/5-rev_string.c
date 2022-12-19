#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to string
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	int len = 0, i, j;

	while (s[len])
		len++;
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
	}
}
