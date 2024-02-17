#include "main.h"
#include <stdlib.h>

/**
 * _pow - function that calculates (base^power)
 * @base: input value of the exponent
 * @power: input value of power exponent
 * Return: (base^power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int current;
	unsigned int a;

	current = 1;

	for (a = 1; a <= power; a++)
		current *= base;
	return (current);
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: input pointer to a string
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;

	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		check = n & divisor;

	if (check == divisor)
	{

	flag = 1;
	_putchar ('1');
	}

	else if (flag == 1 || divisor == 1)
	{
		_putchar ('0');
	}

		divisor >>= 1;
	}
}
