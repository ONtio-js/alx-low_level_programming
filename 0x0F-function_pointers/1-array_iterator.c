#include <stdio.h>
#include "function_pointers.h"
/**
  * array_iterator - print name
  * @array: pointer to an anrray
  * @size: size of array
  * @action: pointer to function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	 size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
