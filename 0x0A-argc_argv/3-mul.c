#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
if (argc >= 3)
{
printf("%d\n", strtonum(argv[1]) + strtonum(argv[2]));
}
else
{
printf("Error\n");
}
return (1);
}
