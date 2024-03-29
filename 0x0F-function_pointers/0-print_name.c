#include "function_pointers.h"
/**
 * print_name - prints name by calling another function
 * @name: name to be printed
 * @f: pointer to function that prints name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
