/**
 * _puts - prints a string
 * @str: a string passed into the function
 */

#include "main.h"

void _puts(char *str)
{
	int i;

	for ( i = 0; i != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
