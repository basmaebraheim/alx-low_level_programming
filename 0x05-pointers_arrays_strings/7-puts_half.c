#include "main.h"
/**
*puts_half - puts half of string
*@str: string input
*Return:void
*/

void puts_half(char *str)
{
int index;
int length = _strlen(str);
if (len % 2 == 0)
length = length / 2;
else
length = (length + 1) / 2;
while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
_putchar('\n');
}

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
