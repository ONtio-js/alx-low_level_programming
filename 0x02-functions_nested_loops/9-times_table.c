#include "main.h"
/**
 * times_table - prints the mutilplicative value of number from 0-9
 */

void times_table(void)
{
	int a = 0;
	int b;
	
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			int c = a*b;
			_putchar(c + '0');
			_putchar(',');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
