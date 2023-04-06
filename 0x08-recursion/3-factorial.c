#include "main.h"
/**
 * factorial - returns factorial of given num
 * @n: number to return factorial of
 * Return: factorial of num
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
