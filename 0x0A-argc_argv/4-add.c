#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, add = 0, i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result = atoi(argv[i]);
			if (result == 0)
			{
				printf("Error\n");
				return (1);
			}
			else if (result > 0)
			{
				add = add + result;
			}
		}
		printf("%d\n", add);
	}
	return (0);
}
