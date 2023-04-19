#include "main.h"
/**
 * print_numbers - function that prints numbers (0 - 9)
 * _putchar - prints ASCII character
 * return: void
 */
void print_numbers(void)
{
	char a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
