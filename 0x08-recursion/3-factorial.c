/**
 * factorial - it returns the factorial of a number
 * @n: value of factorialt to be checked for.
 * Return: returns -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	n = n * factorial(n - 1);
	return (n);
}
