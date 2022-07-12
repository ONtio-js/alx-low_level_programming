/**
 * _strcpy - copy string unto the first argument
 * @dest: first argument to be replace
 * @src: second argument to be copied
 * Return: return the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char c[] = *dest;
	*dest = *src;
	return (*dest);
}
