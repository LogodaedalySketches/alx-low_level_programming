#include "main.h"
/**
 * print_alphabet - lowercase alphabet
 * Description: 'function that prints the alphabet in lowercase'
 * Return: void
 */
void print_alphabet(void)
{
	int lc = 97;

	for (lc = 97; lc <= 122; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}
