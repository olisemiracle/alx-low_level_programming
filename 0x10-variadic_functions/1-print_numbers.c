#include "variadic_functions.h"
/**
 * print_numbers - prints arguments of a function
 * @separator: cahracter to seperate numbers
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (n == 0)
		return;
	va_start(numbers, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(numbers, int));
			if (i == n - 1)
				printf("\n");
			else
				printf("%s ", separator);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(numbers, int));
			if (i == n - 1)
				printf("\n");
			else
				printf(" ");
		}
	}
	va_end(numbers);
}
