#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isalpha - checks if alphabetic character is lowercase or not
 *
 * @c: insert functions
 *
 * Return: 1 if c is true, else 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
