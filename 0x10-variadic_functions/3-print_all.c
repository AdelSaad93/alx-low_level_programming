#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - Print a character.
 * @ap: Argument pointer.
 */
void print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_i - Print an integer.
 * @ap: Argument pointer.
 */
void print_i(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_f - Print a float.
 * @ap: Argument pointer.
 */
void print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_s - Print a string or (nil) if the string is NULL.
 * @ap: Argument pointer.
 */
void print_s(va_list ap)
{
	char *s = va_arg(ap, char *);

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
	va_list args;

	va_start(args, format);

	int i = 0;
	char *separator = "";

	while (format && format[i])
	{
		if ((format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's'))
		{
			printf("%s", separator);
			switch (format[i])
			{
				case 'c':
					print_c(args);
					break;
				case 'i':
					print_i(args);
					break;
				case 'f':
					print_f(args);
					break;
				case 's':
					print_s(args);
					break;
			}
			separator = ", ";
		}
		i++;
	}

	va_end(args);

	printf("\n");
}

