/**
 * print_numbers - prints numbers from 0 - 9
 */

#include  "main.h"

void print_most_numbers(void)
{
	int value = 0;

	while (value < 10)
	{
		if (value != 2 && value != 4)
		{
			_putchar(value);
		}
		value++;
	}
	_putchar('\n');
}
