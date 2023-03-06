#include "main.h"

/**
 * *_memcpy - copies a memory area.
 *
 * @dest: location for copied memory location.
 * @src: memory location to be copied.
 * @n: function copies.
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
