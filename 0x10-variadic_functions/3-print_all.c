#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints values based on a format string
 * @format: a format string containing format specifiers
 * @...: variable number of arguments corresponding to the format string
 *
 * Description: This function prints values based on the format string
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;

	char *separator = "";
	unsigned int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i + 1])
			separator = ", ";

		if (format[i] == 'c')
			printf("%s%c", separator, va_arg(args, int));
		else if (format[i] == 'i')
			printf("%s%d", separator, va_arg(args, int));
		else if (format[i] == 'f')
			printf("%s%f", separator, (float)va_arg(args, double));
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, str);
		}

		i++;
	}

	printf("\n");

	va_end(args);
}

