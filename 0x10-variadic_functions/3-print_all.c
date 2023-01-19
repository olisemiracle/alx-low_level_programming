#include "variadic_functions.h"
/**
 * character - prints character
 * @all: where the character is
 */
void character(va_list all)
{
	printf("%c", va_arg(all, int));
}
/**
 * integer - prints integer
 * @all: where the integer is
 */
void integer(va_list all)
{
	printf("%d", va_arg(all, int));
}
/**
 * decimal - prints decimal
 * @all: where the double is
 */
void decimal(va_list all)
{
	printf("%f", va_arg(all, double));
}
/**
 * string - prints string
 * @all: where the string is
 */
void string(va_list all)
{
	char *s = va_arg(all, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - prints all types of arguments
 * @format: types of araguments
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list all;
	char *separator = "";
	print prints[] = {
		{'c', character},
		{'i', integer},
		{'f', decimal},
		{'s', string}
	};

	va_start(all, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == prints[j].c)
			{
				printf("%s", separator);
				prints[j].fptr(all);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(all);
}
