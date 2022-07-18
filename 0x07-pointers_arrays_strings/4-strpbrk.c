/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: strings to be compared to @s
 * Return: returns a pointer to the bytes s if not returns null;
 */

#includes "main.h"

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; i != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
