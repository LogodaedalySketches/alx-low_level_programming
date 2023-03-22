#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabets 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha_x10;
	int i;

	i = 0;

	while (i < 10)
	{
		for (alpha_x10 = 'a'; alpha_x10 <= 'z'; alpha_x10++)
		{
			_putchar(alpha_x10);
		}
	_putchar('\n');
	i++;
	}
}
