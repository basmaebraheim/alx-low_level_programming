#include "main.h"
/**
*swap_int: swap 2 input pointer values
*@a: pointer1
*@b: pointer2
*Return : nothing
*/

void swap_int(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
