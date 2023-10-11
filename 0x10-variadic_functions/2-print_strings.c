#include "variadic_functions.h"

/**
 * print_strings - prints strings with separator
 * @separator: strings separator
 * @n: number of parameters
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i = 0;
	va_list listOfArgs;

	if (!separator)
		separator = "";

	va_start(listOfArgs, n);

	while (i < n)
	{
		str = va_arg(listOfArgs, char*);
		if (!str)
			str = "(nil)";
		printf("%s", str);

		if (i != (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(listOfArgs);
}
