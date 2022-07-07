/**
 * main - prints the fizz buzz numbers from 1- 100
 * Return: rturns 0 if successful or 1 otherwise
 */

#include <stdio.h>



int main(void)
{
	fizz_buzz();
	return (0);
}


/**
 * fizz_buzz - print the fizz buzz numbers
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("%s ", "FizzBuzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
