#ifndef VARIADIC
#define VARIADIC
#define FORMAT(f) ("%"#f)
#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct printall - Define a struct to figure out how to print
 * @c: Character to check for
 * @fptr: Pointer to function to call
 */
typedef struct printall
{
	char c;
	void (*fptr)();
} print;
#endif /* VARIADIC*/
