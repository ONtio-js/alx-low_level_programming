#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns number in base in 16
 * Return: return 0 if successful
 */

int main(void)
{
	int ch = '0';
	int chi = 'a';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	while (chi <= 'f')
	{
		putchar(chi);
		chi++;
	}
	putchar('\n');
	return (0);
}
