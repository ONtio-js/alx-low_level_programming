#include "main.h"
/**
 * _islower - prints the alphabets in lower case
 * Return: returns 0 if successful or 1 if otherwise
 */

int  _islower(int alpha)
{
	if(alpha <= 'a' && alpha >= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
