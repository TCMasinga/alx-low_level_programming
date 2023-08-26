#include "main.h"
/**
 * print_number - prints an intiger
 * @n: an integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n1 <= 0)
	{
		n1 = -n;
		_putchar('_');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_numbers(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
