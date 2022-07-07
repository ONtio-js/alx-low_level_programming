/**
 * print_diagonal - print diagonal line
 * @value: lenth of the diagonal
 */
#include "main.h"

void print_diagonal(int value)
{
	int i;

	for (i = 1; i <= value; i++)
	{
		_putchar('\v');
		_putchar('\\');
	}
	_putchar('\n');
}
