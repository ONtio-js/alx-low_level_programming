#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns numbe
 * Return: returns 0 if successful
 */

/**
 * print - returns character
 * @n: character to be printed
 */
void print(int n)
{
	putchar(n);
}

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		print(num);
		num++;
	}
	putchar('\n');
	return (0);
}
