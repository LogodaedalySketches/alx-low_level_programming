#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of two diagonals
 * @a: input
 * @size:- size of the matrix
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int add1, add2, x;

	add1 = 0;
	add2 = 0;

	for (x = 0; x <	size; x++)
	{
		add1 = add2 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		add2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", add1, add2);
}
