#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - function returns the lngth of a string.
 * @s: string to be counted.
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}

