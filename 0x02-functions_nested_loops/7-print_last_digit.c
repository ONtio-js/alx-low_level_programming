#include "main.h"
/**
 * print_last_digit - prints the last digit of the given vakue
 * @value: the given value
 * Return: returns 0 if succcessful 1 if otherwise
 */

int print_last_digit(int value)
{
	if (value % 10 == 0)
	{
		_putchar('0');
	}
	else
	{
		value = value % 10;
		return (value);
	}
	return (0);
}
