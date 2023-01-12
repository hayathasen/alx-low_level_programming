#include <stdlib.h>

/**
 * malloc_checked -> allocate memory
 * @b: number of the bytes to allocate
 * Return: pointer to allocate memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);

}

