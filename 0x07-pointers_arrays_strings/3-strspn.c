/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: prefixed to be matched
 * Return: returns a bytes in initial segment to @s thats in @accept
 */

#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int p = 0, i, j;

	while (s[i] != '\0')
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					p++;
				}
			}
		}
		else
		{
			return (p);
		}
		i++;
	}
	return (p);
}
