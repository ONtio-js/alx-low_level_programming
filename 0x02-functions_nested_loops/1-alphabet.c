#include "main.h"
/**
 * main - prints the alphabets in lower case
 * Return: returns 0 if successful
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	return (0);
}
