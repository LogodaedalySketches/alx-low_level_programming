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
		while (b < 15)
		{
			if (b >= 10)
				_putchar('1');
			_putchar(b % 10 + '0');
		}
		_putchar ('\n');
	}
}
