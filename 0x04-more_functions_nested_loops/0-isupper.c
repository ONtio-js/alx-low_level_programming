/**
 * _isupper - check wether a passed in argument is in uppercase letter
 * @value: value to be checked
 * Return: return 1 if uppercase or 0 if otherwise
 */

#include "main.h"

int _isupper(int value)
{
	if (value >= 65 && value <= 90)
	{
		_putchar(value);
		return (1);
	}
	else
	{
		return (0);
	}
}
