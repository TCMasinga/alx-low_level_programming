#include <stdio.h>
/**
 * main - Entry
 * Description - Printing the alphabets
 * Return: 0
 */
int main(void)
{
		char alph[26] = "abcdefghijklmnopqrstuvwxyz";
			int i;

		for (i = 0; i < 26; i++)
		{
			putchar(alph[i]);
		}
		putchar('\n');
		return (0);
}
