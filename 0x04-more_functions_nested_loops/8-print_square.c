/**
 * print_square - print square with the number provided
 * @size: the number
 */

#include "main.h"

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
