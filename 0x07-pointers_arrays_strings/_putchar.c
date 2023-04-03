#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes char c to stdout
 * @c: the char to print
 * Return: On success 1
 * On error, -1 is returned and errno is set appropriately
 */
int_putchar(char c)
{
	return(write(1, &c, 1));
}
