/**
 * _strlen_recursion - prints length of string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{

    if (*s)
    {
        return 1 + _strlen_recursion(s + 1);
    }
    return 0;

}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
