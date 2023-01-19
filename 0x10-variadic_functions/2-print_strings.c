#include "variadic_functions.h"
/**
 * print_strings - prints arguments of a function
 * @separator: strings to act as separators
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(strings, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{

			str = va_arg(strings, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
	}
	printf("\n");
	va_end(strings);
}
