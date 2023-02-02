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
	while (i < j)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		num = b[i] - '0';
		sum = sum + num * pow(2, j - i - 1);
		i++;
	}
	return (sum);
}
