#include "main.h"

/**
 * swap_int - swap two variable integers
 * @author LogodaedalySketches
 * @a: swap and store address of b
 * @b: swap and store address of a
 * Return: Always 0
 */
int swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
