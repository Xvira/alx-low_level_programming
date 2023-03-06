#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: memory area
 * @n: unsigned int
 * @b: constant byte
 *
 * Return: pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
