#include "main.h"
/**
 * print_las_digit - prints the last digit of a number
 * @n: takes number input
 * Return: value of the last digit
 */
int print_last_ditit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
