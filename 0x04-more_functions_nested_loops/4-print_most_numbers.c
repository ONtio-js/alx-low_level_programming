/**
 * print_numbers - prints numbers from 0 - 9
 */

#include  "main.h"

void print_numbers(void)
{
	int value;

	for (value = 0; value <= 9; value++)
	{
		if (value != 2 && value != 4)
		{
			_putchar(value);
		}
	}
	_putchar('\n');
}
