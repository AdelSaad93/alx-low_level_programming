#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Print a character.
 * @args: Argument pointer.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - Print an integer.
 * @args: Argument pointer.
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Print a float.
 * @args: Argument pointer.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Print a string or (nil) if the string is NULL.
 * @args: Argument pointer.
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - Print anything based on the format.
 * @format: A format string containing format specifiers.
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i = 0;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s", separator);
			print_char(args);
		}
		else if (format[i] == 'i')
		{
			printf("%s", separator);
			print_integer(args);
		}
		else if (format[i] == 'f')
		{
			printf("%s", separator);
			print_float(args);
		}
		else if (format[i] == 's')
		{
			printf("%s", separator);
			print_string(args);
		}
		separator = ", ";
		i++;
	}

	va_end(args);

	printf("\n");
}

