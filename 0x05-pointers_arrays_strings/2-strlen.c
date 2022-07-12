/**
 * _strlen - returns the lenth of a string
 * @s: string to be checked
 * Return: returns the length of a string
 */

#include "main.h"

int _strlen(char *s)
{
	int counter = 0;

	for (; *s++;)
		counter++;
	return (counter);
}
