#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print lowercase and UPPERCASE alphabets'
 * Return: always 0
 */
int main(void)
{
	int n;
	int o;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	for (o = 65; o <= 90; n++)
	{
		putchar(o);
	}
	putchar('\n');
	return (0);
}
