/**
 * print_numbers - prints numbers from 0 - 9
 */

#include  "main.h"

void print_numbers(void)
{
	int value = 48;

	while (value <= 57)
	{
		if (value == 2 && value == 4)
		{
			continue
		}
		_putchar(value);
		value++;
	}
	_putchar('\n');
}
