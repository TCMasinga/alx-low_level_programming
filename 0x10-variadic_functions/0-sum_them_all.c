#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: input value
 * @...: a variable input value
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	unsigned int sum = 0;

	va_start(p, n);

	for (i = 0; i < n; i++)
		sum += va_arg(p, int);

	va_end(p);

	return (sum);
}
