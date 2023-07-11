#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: character
 * Return: 0
 */

char *_strdup(char *str)
{
	char *dupl;
	int i;
	int len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	dupl = malloc(sizeof(char) * (len + 1));

	if (dupl == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
			i++;
	}

	for (len = 0; str[len]; len++)
	{
		dupl[len] = str[len];
	}
	return (dupl);
}
