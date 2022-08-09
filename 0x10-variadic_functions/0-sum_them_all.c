#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - sum a list
  * @n: number of arguments
  * Return: sum.
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int sum = 0;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(arg, int);
	}
	va_end(arg);

	return (sum);
}
