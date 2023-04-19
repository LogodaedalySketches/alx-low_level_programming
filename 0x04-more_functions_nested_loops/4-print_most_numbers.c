#include "main.h"
/**
 * print_most_numbers - function that prints no.s form 0 - 9 excl. 2 & 4
 * Return: numbers
 */
void print_most_numbers(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		if (c == 2 && c == 4)
		{
			_putchar(c + 1);
		}
	_putchar('\n');
	}
}
