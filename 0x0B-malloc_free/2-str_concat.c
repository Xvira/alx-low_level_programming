#include "main.h"
/**
 * str_concat - concatenates two strings
 *
 * @s1: string to be cooncatenated.
 * @s2: string 2
 *
 * Return: NULL (failure), concatenated string (success).
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	unsigned int size, len1 = 0, len2 = 0, i = 0, a = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	size = len1 + len2 + 1;

	con = malloc(sizeof(char) * (size));

	if (con == NULL)
		return (NULL);

	if (s1)
	{
		while (i < len1)
		{
			con[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (s2[a] != '\0')
		{
			con[i] = s2[a];
			i++;
			a++;
		}
	}
	con[i] = '\0';
	return (con);
}
