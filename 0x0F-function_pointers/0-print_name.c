#include "function_pointers.h"

/**
 * print_name - Prints a name using the provided function.
 * @name: The name to print.
 * @f: A function that formats and prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

