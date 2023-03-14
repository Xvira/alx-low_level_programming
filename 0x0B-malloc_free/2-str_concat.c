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
	unsigned int len1 = 0, len2 = 0, size = 0, i = 0, a = 0;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	size = len1 + len2;
	con = malloc(sizeof(char) * (size + 2));
	while (i < len1)
	{
		con[i] = s1[i];
		i++;
	}
	if (s2 == NULL)
	{
		con[i] = '\0';
		return (con);
	}
	while (s2[a] != '\0')
	{
		con[i] = s2[a];
		i++;
		a++;
	}
	con[i] = '\0';
	return (con);
}
