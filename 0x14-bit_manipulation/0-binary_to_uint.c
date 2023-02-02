#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: binary string
 * Return: decimal value of the binary
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = strlen(b), num;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		num = b[i] - '0';
		sum = sum + num * _pow(2, j - i - 1);
		i++;
	}
	return (sum);
}
/**
 * _pow - to find the power of each binary digit
 * @a: base
 * @b: exponent
 * Return: power
 */
int _pow(int a, int b)
{
	int power = 1, i;

	for (i = 1; i <= b; ++i)
	{
		power = power * a;
	}
	return (power);
}
