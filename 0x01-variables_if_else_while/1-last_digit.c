#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - return the last digit of a randomly generated no.
 * Return: returns 0(successful)
 */

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is");

	return (0);
}
