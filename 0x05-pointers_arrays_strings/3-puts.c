/**
 * _puts - prints a string
 * @str: a string passed into the function
 */

#include "main.h"

void _puts(char *str)
{
	int counter = sizeof(str) / sizeof(*str);

	for (int i = 0; i <= counter; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
