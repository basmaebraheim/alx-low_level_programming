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
