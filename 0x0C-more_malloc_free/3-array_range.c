#include <stdlib.h>
#include "main.h"
/**
 * *_array_range - creates integers array
 * @min: min range
 * @max: max range
 * Return: pointer
 */
int *_array_range(int min, int max)
{
	int *ptr;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
