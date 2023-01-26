#include <stdio.h>
void print_text(void)__attribute__((constructor));
/**
 * print_text - prints text before main executes
 */
void print_text(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
