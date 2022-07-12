/**
 * puts2 - return the even index of the string
 * @str: a value
 */

#include "main.h"

void puts2(char *str)
{
	int counter = sizeof(*str) / sizeof(*str[0]);

	for (int i = 0; i <= counter; i++)
	{
		if(i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
