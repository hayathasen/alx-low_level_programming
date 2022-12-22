#include "main.h"

/**
 * cap_string -> capitalizes all words of a string
 * @s: input string
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	char spc[] = { 32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int leng = 13;
	int a = 0, i;

	while (s[a])
	{
		i = 0;
		while (i < leng)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] = s[a] - 32;
			i++;
		}
		a++;
	}
	return (s);
}
