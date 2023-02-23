#include "main.h"

/**
 *_isupper - checks if a charercter is upper.
 *
 *@c: an input char to be tested.
 *
 *Return: returns (1) if c is upper. else (0)
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 95)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
