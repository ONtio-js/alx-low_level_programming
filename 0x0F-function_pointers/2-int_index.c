#include <stdio.h>
#include "function_pointers.h"
/**
  * int_index - search for integer
  * @array: pointer to an array
  * @size: size of array
  * @cmp: pointer to function
  * Return: return integer if find, -1 otherwise
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	 int i;

		if (size < 0)
			return (-1);
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
		{
				cmp(array[i]);
				if (cmp(array[i]) != 0)
				return (i);
		}
		}
		return (-1);
}
