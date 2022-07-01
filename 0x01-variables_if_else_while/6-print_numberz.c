#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns number
 * Return: returns 0 if successful
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
