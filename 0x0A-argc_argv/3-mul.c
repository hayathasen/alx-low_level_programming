#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: this is the Argument count
 * @argv: this is the Argument vector
 *
 * Return: 0;
 */
int main(int argc, char **argv)
{
	int m, n, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	n = atoi(argv[2]);
	mul = m * n;
	printf("%d\n", mul);
	return (0);
}


