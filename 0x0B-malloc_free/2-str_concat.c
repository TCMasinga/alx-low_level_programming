#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: input value1
 * @s2: input value2
 * Return: s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;

	while (s1 && s1[x])
		x++;

	while (s2 && s2[y])
		y++;

	s3 = malloc(sizeof(char) * (x + y + 1));

	if (s3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < x)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (x + y))
		{
			s3[i] = s2[j];
				i++;
			j++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
