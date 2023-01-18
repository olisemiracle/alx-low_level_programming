#include "3-calc.h"
#include <string.h>
/**
 * main - checks the code and prints the result of simple operations
 * @argc: number of command line arguments
 * @argv: command line arguments
 * Return: 98 or 99 or 100 or 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*calc)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	calc = get_op_func(argv[2]);
	if (calc == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	result = (calc)(num1, num2);
	printf("%d\n", result);
	return (0);
}

