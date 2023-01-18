#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcode of its own function
 * @argc: number of arguments
 * @argv: arguments
 * Return: 1, 2, 0
 */
int main(int argc, char *argv[])
{
	int numbyte, i;
	char *ptr;/*pointer to hold address of main and loop through number of bytes*/

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	numbyte = atoi(argv[1]);
	if (numbyte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)&main;
	for (i = 0; i < numbyte - 1; i++)
	{
		printf("%02hhx ", ptr[i]);
	}
	printf("%02hhx\n", ptr[i]);
	return (0);
}
