#include "main.h"

/**
 * reverse_array -> a function that reverses the cotent of an array of integers
 * @a: the array to reverse
 * @n: number of the elements to reverse.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	n--;
	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
