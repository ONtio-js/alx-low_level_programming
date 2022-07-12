/**
 * print_rev - prints strings in a reverse order
 * @s: passed in string to be reversed
 */

#include "main.h"

void print_rev(char *s)
{
	int counter = sizeof(*s) / sizeof(*s[0]);

	for (int i = counter; i >= 0; i--)
	{
		_putchar(*s[i]);
	}
	_putchar('\n');
}
