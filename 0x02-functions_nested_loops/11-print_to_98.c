#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from the given number to 98
 * @value: the stationary point to start ckunting
 */

void print_to_98(int value)
{
	if (value < 98)
	{
		
		while (value < 99)
		{
			printf("%d, ", value);
			value++;
		}
		_putchar('\n');
	}
	else
	{
		while (value >= 98)
		{
			printf("%d, ", value);
			value--;
		}
		_putchar('\n');
	}
