#include <stdio.h>
#include <stdlib.h>
/**
 * main - return all the alphabet except e and q
 * Return: return 0 if successful
 */

int main(void)
{
	int ch = 'a';

	while ((ch <= 'z') $$ (ch != 'e' || ch != 'q'))
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
