#include "main.h"

/**
 *jack_bauer - prints all the minutes of the day.
 *
 *Return: null return value.
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48; c <= 57; b++)
		{
			for (c = 48; b <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (a >= 50 && b >= 52)
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}


	}
}
