#include "search_algos.h"

/**
  * jump_search -  searches for a value in a sorted array of
  * integers using the Jump search algorithm
  * @array: a pointer to the first element of the array to search in.
  * @size: number of elements in the array.
  * @value: value to search for.
  *
  * Return: the first index where the value is located.
  *
  * Description: Every time you compare a value in the array to
  * the value you are searching for, you have to print this value
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);
	i = 0;
	for (jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
