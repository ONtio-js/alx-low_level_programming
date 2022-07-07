/**
 * print_line - print a line in terminal
 * @num: the length of the line
 */
#include "main.h"
#include <stdio.h>

void print_line(int num)
{
	int i;

	for (i = 1; i <= num; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
