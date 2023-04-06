#include "main.h"
/**
 * _strlen_recursion - returns string length
 * @s: string with length
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
