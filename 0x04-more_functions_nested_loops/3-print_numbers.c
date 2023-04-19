#include "main.h"
/**
 * print_numbers - function to print numbers form 0 - 9
 * Return: void
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
