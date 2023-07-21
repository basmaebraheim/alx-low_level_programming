#include<stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
 *
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * prime_factor - finds and prints the largestPrime
 *			prime factor of number (num)
 *
 * @num: number to find
*/

void prime_factor(long int num)
{
	int primeNumber, largestPrime;


	while (num % 2 == 0)
		num = num / 2;


	for (primeNumber = 3; primeNumber <= _sqrt(num); primeNumber += 2)
	{
		while (num % primeNumber == 0)
		{
			num = num / primeNumber;
			largestPrime = primeNumber;
		}
	}


	if (num > 2)
		largestPrime = num;
	printf("%d\n", largestPrime);
}

/**
 * main - Entry point
 *
 * Return: 0
*/
int main(void)
{

	prime_factor(612852475143);

	return (0);
}
