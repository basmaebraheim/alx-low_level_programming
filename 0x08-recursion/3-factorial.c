/**
 * factorial - calculate factorial of number
 * @s: string
 * Return: If n is lower than 0, the function
 * should return -1 to indicate an error
 * Factorial of 0 is 1
 */
int factorial(int n)
{

if (n < 0) return (-1);
else if (n == 0) return (1);

return (n * factorial(n - 1));


}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = factorial(1);
printf("%d\n", r);
r = factorial(5);
printf("%d\n", r);
r = factorial(10);
printf("%d\n", r);
r = factorial(-1024);
printf("%d\n", r);

return (0);
}
