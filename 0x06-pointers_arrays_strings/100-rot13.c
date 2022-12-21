#include <stdio.h>
/**
 * rot13 - convert string to rot13
 * @str: source string
 * Return: pointer to convert string
 */
char *rot13(char *str)
{
	int i, j;
	char ch[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (str[i] == ch[j])
			{
				str[i] = n[j];
				break;
			}
		}
	}
	return (str);
}
