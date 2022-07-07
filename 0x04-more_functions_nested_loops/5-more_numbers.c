/**
 * more_numbers - prints given set of number into 10
 */

#include "main.h"

void more_numbers(void)
{
	int value = 1;
	int j;

	for (value = 1;value <= 10; value++)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j+'0');
			j++;
		}
		_putchar('\n');
	}
}
