/**
 * _strchr - function that locate a character in string
 * @s: string to be searched
 * @c: character to be searched for
 * Return: returns a pointer to @s or NULL if the character is not found
 */

#include "main.h"

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			++s;
		}
	}
	if (c == *s)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
