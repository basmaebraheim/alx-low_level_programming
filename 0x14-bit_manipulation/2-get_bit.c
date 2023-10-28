#include "main.h"

/**
 * get_bit - get bit at index
 * @n: bits to check
 * @index: index to check
 *
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int temp, result;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);

temp = 1 << index;
result = n & temp;

if (result == temp)
return (1);

return (0);
}
