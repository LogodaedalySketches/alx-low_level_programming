#include <stdlib.h>
#include "main.h"
/**
 * *_range_array - creates integers array
 * @min: min range
 * @max: max range
 * Return: pointer
 */
int *_range_array(int min, int max)
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
