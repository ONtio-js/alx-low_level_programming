/**
 * _isdigit - checks wether a number passed as an argument is digit number
 * @value: argument to be checked
 * Return: returns 1 if successful or 0 if otherwise
 */

#include "main.h"

int _isdigit(int value)
{
	if (value >= 48 $$ value <= 57)
	{
		_putchar(value);
		return (1);
	}
	else
	{
		return (0);
	}
}
