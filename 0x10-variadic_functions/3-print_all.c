#include <stdarg.h>
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
	int j = 0;
	char *separator = "";
	print_func_t print_funcs[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
	};

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == print_funcs[j].format)
			{
				printf("%s", separator);
				print_funcs[j].printer(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}

