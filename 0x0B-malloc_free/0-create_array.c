#include "main.h"
#include <stdlib.h>
/**
 * create array - create array of chars
 * @size:- size of array
 * @c:- char
 * Return: ponter to array, Null if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < 10; i++)
	{
		str[i] = c;
	}
	return (str);
}
