#include "main.h"
/**
 * more_numbers - function that prints no.s from 0 - 14
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 1; a < 11; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
				_putchar('1');
			_putchar(b % 10 + '0');
		}
		_putchar ('\n');
	}
}
