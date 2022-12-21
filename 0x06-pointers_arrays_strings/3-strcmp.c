#include <stdio.h>
/**
 * _strcmp - function to compare two strings
 * @s1: first string
 * @s2: second  string
 * Return: 0 if same, -15 if s1 less than s2, 15 if s2 is greater
 */
int _strcmp(char *s1, char *s2)
{
	int i, flag = 0;

	for (i = 0; *(s1 + i) == *(s2 + i); i++)
	{
		if (*(s1 + i) == '\0' || *(s2 + i) == '\0')
		{
			break;;
		}
	}
	flag =  *(s1 + i) - *(s2 + i);
	return (flag);
}
