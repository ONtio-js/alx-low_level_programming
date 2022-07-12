/**
 * puts2 - return the even index of the string
 * @str: a value
 */

#include "main.h"

void puts2(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
