#include "main.h"
#include <ctype.h>
/**
 *_isupper - function that checks for uppercase chars
 *@c:- uppercase chars to check
 *Return: 1 if c is uppercase
 *else: 0 if otherwise
 */
int _isupper(int c)
{
	if (isalpha(c) && isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
