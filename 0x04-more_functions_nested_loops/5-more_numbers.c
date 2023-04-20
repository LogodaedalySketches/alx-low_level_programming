#include "main.h"
/**
 * more_numbers - function that prints no.s from  - 14
 */
void more_numbers(void)
{
	char a;

	while (a == 0 && a < 15)
	{
		_putchar(a);
		a++;
	}
	_putchar(a);
	_putchar('\n');
}
