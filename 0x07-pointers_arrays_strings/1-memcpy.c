/**
 * _memcpy - copies memory location
 * @dest: destination of the memory to be copied
 * @src: source of the memory that will be copied
 * @n: the number of bytes to be copied
 * Return: returns a pointer to memory destination @dest;
 */

#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
