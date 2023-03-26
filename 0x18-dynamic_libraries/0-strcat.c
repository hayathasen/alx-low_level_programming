#include "main.h"

/**
 * _strcat -> this function will concatenates two strings
 * @dest: the string that will be modified.
 * @src: the string that will be concatenated to @dest
 *
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int index_01 = 0;
	int index_02 = 0;

	while (dest[index_01] != '\0')
	{
		index_01++;
	}

	while (src[index_02] != '\0')
	{
		dest[index_01 + index_02] = src[index_02];
		index_02++;

	}
	dest[index_01 + index_02] = '\0';

	return (dest);
}

