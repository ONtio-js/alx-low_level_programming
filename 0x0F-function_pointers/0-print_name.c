
#include <stdio.h>
#include "function_pointers.h"
/**
  * print_name - print name
  * @name: pointer to a char
  * @f: pointer to a funtion
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
