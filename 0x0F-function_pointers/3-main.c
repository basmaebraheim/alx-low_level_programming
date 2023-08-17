#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - start function
  * @argc: count of arguments
  * @argv: arguments values
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int (*inputfunction)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	inputfunction = get_op_func(argv[2]);

	if (!inputfunction)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", inputfunction(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
