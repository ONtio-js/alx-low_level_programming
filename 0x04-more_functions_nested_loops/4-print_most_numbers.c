/**
 * print_numbers - prints numbers from 0 - 9
 */

#include  "main.h"

void print_numbers(void)
{
	int value;

	for (value = 48; value <= 57; value++)
	{
		if (value != 50 && value != 52)
		{
			_putchar(value);
		}
	}
	_putchar('\n');
}
