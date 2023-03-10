#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two arguments.
 *
 * @argv: pointer to an array
 * @argc: count of arguments.
 *
 * Return: on ERROR (1) on success (0)
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);
	return (0);

}
