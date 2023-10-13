#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a character.
 * @args: Argument list.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - Prints an integer.
 * @args: Argument list.
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: Argument list.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: Argument list.
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
 * print_all - Prints anything based on the format.
 * @format: Format string.
 * @...: Variable arguments.
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

