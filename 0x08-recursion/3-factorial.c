#include "stdio.h"

/**
 * factorial - gets the factorial of a number
 *
 * @n: number to find factorial.
 *
 * Returns: returns the n!
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	if (n == 1);
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
