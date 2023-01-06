#include <stdio.h>
/**
 * main - write a program that prints the number of arguments passed into it
 *
 * @argc: this is the Argument count
 * @argv: this is the Argument vector
 *
 * Return: this return to 0
 *
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
