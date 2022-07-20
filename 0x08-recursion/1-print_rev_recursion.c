/**
 * _print_rev_recursion - prints string in reverse other
 * @s: the string to be print in reverse other
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		return (*s);
	}
}
