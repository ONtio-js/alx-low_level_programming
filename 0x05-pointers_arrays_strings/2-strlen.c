/**
 * _strlen - returns the lenth of a string
 * @s: string to be checked
 * Return: returns the length of a string
 */

#include "main.h"

int _strlen(char *s)
{
	int counter;

	counter = sizeof(s) / sizeof(s[0]);

	return (counter);
}
