#include "variadic_functions.h"

/**
 * print_all - Prints arguments with format
 * @format: input format
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int flag;
	char *str;
	va_list listOfArgs;
	int i = 0;

	va_start(listOfArgs, format);

	while (format && format[i])
	{
		flag = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(listOfArgs, int));
				break;
			case 'i':
				printf("%i", va_arg(listOfArgs, int));
				break;
			case 'f':
				printf("%f", va_arg(listOfArgs, double));
				break;
			case 's':
				str = va_arg(listOfArgs, char*);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(listOfArgs);
}
