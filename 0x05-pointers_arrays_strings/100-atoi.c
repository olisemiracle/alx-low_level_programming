#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: integer value
 */

int _atoi(char *s)
{
	int i, number = 0, sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] >= '0' && s[i] <= '9')
			number = (number * 10) + (s[i] - '0');
	}
	number = number * sign;
	return (number);

}
