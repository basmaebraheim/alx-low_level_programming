#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string to print
* Return: void
*/
void print_rev(char *s)
{
int i = _strlen(s) - 1;
for (; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
