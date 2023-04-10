#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 *
 * @n: number to get bit value
 *
 * @index: index starting from 0, of the bit we want to get
 *
 * Return: value of the bit at index index or -1 if an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);


}
