#include "function_pointers.h"

/**
 * array_iterator - execute given function on array of elements
 *
 * @array: array
 * @size: size of the array
 * @action: pointer to the function to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
