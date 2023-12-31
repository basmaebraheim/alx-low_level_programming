/**
 * is_prime_number_ceck - check if number is prime
 * @n: number to check if prime
 * @i: number to test if it is devidable
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number_ceck(int n, int i)
{

if (i >= n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}

return (is_prime_number_ceck(n, i + 1));
}
/**
 * is_prime_number - check if number is prime
 * @n: number to check if prime
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (is_prime_number_ceck(n, 2));
}
