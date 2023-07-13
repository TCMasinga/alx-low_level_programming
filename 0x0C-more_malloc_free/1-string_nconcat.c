#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: input value
 * @s2: input value
 * @n: number of bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int x = 0;
	unsigned int y = 0;

	while (s1 && s1[x])
		x++;
	while (s2 && s2[y])
		y++;

	if (n < y)
		s = malloc(sizeof(char) * (x + n + 1));
	else
		s = malloc(sizeof(char) * (x + y + 1));

	if (!s)
		return (NULL);

	while (i < x)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < y && i < (x + n))
		s[i++] = s2[j++];

	while (n >= y && i < (x + y))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
