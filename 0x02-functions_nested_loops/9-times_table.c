#include "main.h"
/**
 * times_table - prints the mutilplicative value of number from 0-9
 */

void times_table(void)
{
	int a,c,b;

	for (a = 0;a <= 9; a++)
	{
		for (b = 0;b <= 9;b++)
		{
			c = a*b;
			_putchar(c + '0');
			return (c);
		}
	}
}
