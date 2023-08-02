/**
 * _sqrt_recursion - natural square root of a number
 * @n: number to get its square root
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
return (_sqrt_recursion_root(n , 0));
}
/**
 * _sqrt_recursion_root - natural square root of a number
 * @n: number to get its square root
 * @i: number to test if it is root
 * Return: square root of number
 */
int _sqrt_recursion_root(int n, int i)
{
if (i * i == n) return (i);
if (i > n) return (-1);

_sqrt_recursion_root(n , i + 1);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = _sqrt_recursion(1);
printf("%d\n", r);
r = _sqrt_recursion(1024);
printf("%d\n", r);
r = _sqrt_recursion(16);
printf("%d\n", r);
r = _sqrt_recursion(17);
printf("%d\n", r);
r = _sqrt_recursion(25);
printf("%d\n", r);
r = _sqrt_recursion(-1);
printf("%d\n", r);

return (0);
}
