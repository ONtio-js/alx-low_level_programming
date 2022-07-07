#include "main.h"
/**
 * print_number - prints number using _putchar
 * @value: number to be printed
 */
void print_number(int value)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
