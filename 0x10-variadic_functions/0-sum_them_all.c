#include "variadic_functions.h"

/**
 * sum_them_all - get sum of all its parameters.
 * @n: number of parameters
 * Return: sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list listOfArgs;

	va_start(listOfArgs, n);

	if (n == 0)
		return (0);

	while (i < n)
	{
		sum += va_arg(listOfArgs, int);
		i++;
	}

	va_end(listOfArgs);

	return (sum);
}
