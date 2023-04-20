#include "main.h"
/**
 * print_line - function that draws straight line
 * @n:- No. of times char '_' will print
 */
void print_line(int n)
{
	for (n = 1; n >= 1; n++)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
