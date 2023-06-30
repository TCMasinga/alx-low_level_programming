#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: ptr to the encoded string
 */
char *rot13(char *s)
{
	int i;
	int j;

	char *alp = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZ";
	char *rot13 = "noprstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alp[j] != '\0'; j++)
		{
			if (s[i] == alp[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
