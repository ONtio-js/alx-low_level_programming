/**
 * print_rev - prints strings in a reverse order
 * @s: passed in string to be reversed
 */

#include "main.h"

void print_rev(char *s)
{

	for (int i = '\0'; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
