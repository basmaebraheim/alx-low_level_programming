#include "search_algos.h"

/**
  * interpolation_search -  searches for a value in a sorted array of integers
  * using the Interpolation search algorithm.
  * @array: A pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: value to search for.
  *
  * Return: the first index where the value is located.
  *
  * Description: Every time you compare a value in the array to the
  * value you are searching, you have to print this value.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (!array || size == 0)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
