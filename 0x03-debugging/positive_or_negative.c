#include "main.h"
/**
 * main - Test function to check if n is positive or negative
 * Return: always 0
 */
int main(void)
{
	int n = 0;

	if (n < 0)
	{
		printf("%d is negative", n);
	}
	else if (n > 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}
