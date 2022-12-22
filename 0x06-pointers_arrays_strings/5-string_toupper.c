#include "main.h"

/**
 * string_toupper -> a function to uppercase all lowercase letters
 * @s: string to process
 *
 * Return: apointer
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	s[i] = '\0';

	return (s);
}
