/**
 * puts_half - prints the half of string
 * @str: value
 */

#include "main.h"

void puts_half(char *str)
{
	int num = sizeof(str) / sizeof(*str);
	int a;

	if (num % 2 != 0)
	{
		a = num / 2;
		n = num - 1;
		while (a != '\0')
		{
			_putchar(str[a]);
		}
		_putchar(n);
		_putchar('\n');
	}
	else
	{
		while (str[a] != '\0')
		{
			_putchar(str[a]);
		}
		_putchar('\n');
	}
}
