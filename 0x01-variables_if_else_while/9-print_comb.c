#include <stdio.h>
#include <stdlib.h>
/**
 * main - return a certain value of number
 * Return: return 0if successful
 */

int main(void)
{
	int num = '0';
	int comma = ',';

	while (num <= '8')
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('9');
	return (0);
}
