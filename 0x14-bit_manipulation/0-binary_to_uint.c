#include "main.h"

/**
 * binary_to_uint -convert binary to unsigned int.
 * @b: pointing to a string of binary
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int j = 0, i;

if (!b)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
j <<= 1;
if (b[i] == '1')
j += 1;
}
return (j);
}
