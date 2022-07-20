/**
 * _puts_recursion - it prints the string passed into it
 * @s: strings to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\0');
	_putchar(*s);
	_puts_recursion(s++);
}
