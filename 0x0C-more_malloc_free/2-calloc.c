#include <stdlib.h>
#include "main.h"
/**
 * *_memset - allocates memory for an array
 * @s:- memory to be filled
 * @b:- char to copy
 * @n:- repeated copy times
 * Return: pointer to the memory area s
 */
char *_memory(char *s, char a, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
	{
		s[b] = a;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: no. of elements in array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memory(ptr, 0, nmemb * size);
	return (ptr);
}
