#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints values based on a format string
 * @format: a format string containing format specifiers
 * @...: variable number of arguments corresponding to the format string
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	char *separator = "";
	int print_separator = 0;

	while (*format)
	{
		if (print_separator)
			printf(", ");
		print_separator = 1;

		switch (*format)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				char *str = va_arg(args, char *);

				if (!str)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				print_separator = 0;
				break;
		}

		format++;
	}

	printf("\n");

	va_end(args);
}

