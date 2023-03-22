#include "main.h"
/**
 * _abs - Calculates the absolute value of an int
 * @c: The number to be calculated
 * Return: Absolute value of number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_value;

	abs_value = c * -1;
	return (abs_value);
	}
	return (c);

}
