/**
 * swap_int - its interchanges an interger value passed to it
 * @a: first value
 * @b: second value
 */

#include "main.h"

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
