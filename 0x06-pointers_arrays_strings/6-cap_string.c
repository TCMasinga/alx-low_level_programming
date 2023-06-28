#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalised
 * Return: pointer
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
	if (!(str[index] >= 'a' && str[index] <= 'z'))
	{
		index++;
	continue;
	}
	if (str[index - 1] == ' ' ||
			str[index - 1] == '\t' ||
			str[index - 1] == '\n' ||
			str[index - 1] == '_' ||
			str[index - 1] == '.' ||
			str[index - 1] == ';' ||
			str[index - 1] == ',' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '*' ||
			str[index - 1] == '(' ||
			str[index - 1] == ')' ||
			str[index - 1] == '[' ||
			str[index - 1] == ']')
	{
		str[index] -= 32;
	}
		index++;
	}
	return (str);
}
