#include <stdio.h>
/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
if (argc == 1)
{
printf("0\n");
}

int i, number, sum = 0;
char *flag;

while(i < argc)
{
number = strtol(argv[i], &flag, 10);
if(*flag)
{
printf("Error\n");
return (1);
}
sum += number;
i++;
}
return (1);
}
