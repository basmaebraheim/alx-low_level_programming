/**
 * is_prime_number_ceck - check if number is prime
 * @n: number to check if prime
 * @i: number to test if it is devidable
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number_ceck(int n, int i)
{

if (i >= n) return (1);
if (n % i == 0) return (0);

return (is_prime_number_ceck(n , i + 1));
}
/**
 * is_prime_number - check if number is prime
 * @n: number to check if prime
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
if (n < 2) return (0);
return (is_prime_number_ceck(n , 2));
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = is_prime_number(1);
printf("%d\n", r);
r = is_prime_number(1024);
printf("%d\n", r);
r = is_prime_number(16);
printf("%d\n", r);
r = is_prime_number(17);
printf("%d\n", r);
r = is_prime_number(25);
printf("%d\n", r);
r = is_prime_number(-1);
printf("%d\n", r);
r = is_prime_number(113);
printf("%d\n", r);
r = is_prime_number(7919);
printf("%d\n", r);

return (0);
}
