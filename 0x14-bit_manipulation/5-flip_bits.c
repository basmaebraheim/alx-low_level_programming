#include "main.h"
/**
 * flip_bits - flib number
 * @n: first number
 * @m: second number
 * Return: number of bits to flib
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result, diff;
unsigned int numOfBits, i;

numOfBits = 0;
result = 1;
diff = n ^ m;
for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
{
if (result == (diff & result))
numOfBits++;
result <<= 1;
}

return (numOfBits);
}
