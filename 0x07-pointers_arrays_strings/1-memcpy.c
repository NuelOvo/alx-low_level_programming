#include "main.h"

/**
 * _memcpy - copies memory from @src to @dest
 *
 * @dest: where memory is copied to
 * @src: where memory is copied from
 * @n: numbe of bytes
 *
 * Return: returns pointer to @dest
 *
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
