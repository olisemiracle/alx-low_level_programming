#include <stdio.h>
/**
 * leet - convert string to 1337
 * @str: source string
 * Return: pointer to convert string
 */
char *leet(char *str)
{
	int i, j;
	char ch[] = "aeotl";
	char n[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (str[i] == ch[j] || str[i] == (ch[j] - 32))
			{
				str[i] = n[j];
			}
		}
	}
	return (str);
}
