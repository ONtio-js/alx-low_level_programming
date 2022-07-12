/**
 * rev_string - reverses the string passed into it
 * @s: value to be passed
 */

#include "main.h"

void rev_string(char *s)
{
	int counter = sizeof(*s) / sizeof(*s[0]);

	for (int i = counter; i >= 0; i--)
	{

