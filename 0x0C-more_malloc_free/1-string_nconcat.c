#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1.
 * @s2: string 2.
 * @n: unsigned int.
 *
 *Return: pointer to newly allocated space in memory.
 * if it fails (NULL).
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ncon;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n < len2)
	{
		ncon = malloc(sizeof(char) * (len1 + n + 1));
	}

	else
	{
		ncon = malloc(sizeof(char) * (len1 + len2 + 1));
	}

	if (!ncon)
	{
		return (NULL);
	}
	while (i < len1)
	{
		ncon[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		ncon[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		ncon[i++] = s2[j++];

	ncon[i] = '\0';

	return (ncon);
}
