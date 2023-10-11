#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add two integers
  * @a: input number
  * @b: input number
  *
  * Return: number
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - sub two integers
  * @a: input number
  * @b: input number
  *
  * Return: number
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - mul two integers
  * @a: input number
  * @b: input number
  *
  * Return: number
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - div two integers
  * @a: input number
  * @b: input number
  *
  * Return: number
  */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - mod two integers
  * @a: input number
  * @b: input number
  *
  * Return: number
  */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
