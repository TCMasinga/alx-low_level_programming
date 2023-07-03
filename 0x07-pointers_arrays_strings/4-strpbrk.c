#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input value
 * @accept:input value
 * Return: 0 on success
 */
char *_strpbrk(char *s, char *accept)
{
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
				return (s);
		}
		s++;
	}
	return ('\0');
}
