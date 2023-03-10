#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count of arguments.
 * @argv: array of arguments.
 * Return: 0 success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
