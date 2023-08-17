#include "variadic_functions.h"

/**
 * print_numbers - print input numbers
 * @n: number of parameters
 * @separator: separator between numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listOfArgs;
	unsigned int i = 0;

	if (!separator)
		separator = "";

	va_start(listOfArgs, n);

	while (i < n)
	{
		printf("%d", va_arg(listOfArgs, int));

		if (i != (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(listOfArgs);
}
