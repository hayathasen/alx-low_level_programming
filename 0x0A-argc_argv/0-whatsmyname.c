#include <stdio.h>

/**
 * main - write a program that prints its name, followed by a new line.
 * if you rename the program, it will print the new line, without having to
 * compile it again
 * you should not remove the path before the name of the program
 *
 * @argc: this is the argument count
 * @argv: this is the argument vector
 *
 * Return: on success, 0
 */
int main(__attribute__ ((unused)) int argc, char *argv[])
{
	int i;

	i = 0;
	printf("%s\n", argv[i]);
	return (0);
}
