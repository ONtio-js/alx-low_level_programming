/**
 * _strchr - function that locate a character in string
 * @s: string to be searched
 * @c: character to be searched for
 * Return: returns a pointer to @s or NULL if the character is not found
 */

#include "main.h"

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
