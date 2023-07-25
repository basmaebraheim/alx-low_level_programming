#include "main.h"
/**
*print_array - print n element of array
*@a: array
*@n: number of elements
*Return: nothing
*/
void print_array(int *a, int n)
{
int index = 0;
for (index = 0; index < n; index++)
{
if (index != n - 1)
printf("%d, ", a[inc]);
else
printf("%d", a[inc]);
}
printf("\n");
}
