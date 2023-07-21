#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a character
 * @sep: separator string
 * @arg: character argument
 */

void print_char(const char *sep, va_list arg)
{
	printf("%s%c", sep, va_arg(arg, int));
}

/**
 * print_int - prints integer
 * @sep: separator string
 * @arg: integer argument
 */

void print_int(const char *sep, va_list arg)
{
	printf("%s%d", sep, va_arg(arg, int));
}

/**
 * print_float - prints a float
 * @sep: separator string
 * @arg: float argument
 */

void print_float(const char *sep, va_list arg)
{
	printf("%s%f", sep, va_arg(arg, double));
}

/**
 * print_string - prints a string
 * @sep: separator string
 * @arg: string argument
 */

void print_string(const char *sep, va_list arg)
{
	char *str = va_arg(arg, char *);

	if (!str)
		str = "(nil)";
	printf("%s%s", sep, str);
}

/**
 * print_all - prints anything
 * @format: types of arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
		print_char(sep, list);
			break;

				case 'i':
		print_int(sep, list);
			break;

				case 'f':
		print_int(sep, list);
			break;

				case 's':
		print_string(sep, list);
			break;

			default:
			i++;
		continue;
			}

		sep = ", ";
			i++;
		}
	}

	printf("\n");
}
