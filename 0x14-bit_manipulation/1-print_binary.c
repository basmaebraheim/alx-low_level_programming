#include "main.h"
/**
 * calc_power - calculate (base and power)
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: exponet result
 */
unsigned long int calc_power(unsigned int power)
{
unsigned long int result;
unsigned int index;

result = 1;
for (index = 1; index <= power; index++)
result *= 2;
return (result);
}
/**
 * print_binary - prints the binary of a number
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int result, devid;
char flag;

flag = 0;
devid = calc_power(sizeof(unsigned long int) * 8 - 1);

while (devid != 0)
{
result = n & devid;
if (result == devid)
{
flag = 1;
_putchar('1');

}
else if (flag == 1 || devid == 1)
{
_putchar('0');
}
devid >>= 1;
}
}
