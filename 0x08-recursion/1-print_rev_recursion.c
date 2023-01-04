#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - function prints a string in reverse.
 * @s: string to be revrsed.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
