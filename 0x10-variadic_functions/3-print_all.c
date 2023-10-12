#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	unsigned int i = 0;
	int num;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			num = va_arg(args, int);
			printf("%d", num);
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			i++;
			continue;
		}

		if (format[i + 1])
			printf(", ");
		i++;
	}

	printf("\n");

	va_end(args);
}
