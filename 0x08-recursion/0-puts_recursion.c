/**
 * _puts_recursion - prints a string
 * @s: string
 */
void _puts_recursion(char *s)
{

if (*s)
{
putchar(*s);
_puts_recursion(s + 1);
}
return;

}

