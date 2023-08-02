/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{

if (*s)
{
_print_rev_recursion(s + 1);
putchar(*s);
}
return;

}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
_print_rev_recursion("\nColton Walker");
return (0);
}
