/**
 * print_rev - prints strings in a reverse order
 * @s: passed in string to be reversed
 */

#include "main.h"

void print_rev(char *s)
{
	int i, p;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
