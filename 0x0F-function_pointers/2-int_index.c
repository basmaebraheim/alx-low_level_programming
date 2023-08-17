#include "function_pointers.h"

/**
 * int_index - a function given as a
 * parameter on each element of an array.
 *
 * @array: array of int
 * @size: size of the array
 * @cmp:  pointer to the function used to compare
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (size <= 0)
	{
	  return (-1);
	}
	if (array && cmp)
	{
		i = 0;
		while (i < size)
		{
		  if (cmp(array[i]))
		  {
		      return i;
		  }
i++;
}}
	return (-1);
}
