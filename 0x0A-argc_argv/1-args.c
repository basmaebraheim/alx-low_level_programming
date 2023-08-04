#include <stdio.h>
/**
 * main - prints its arguments count, followed by a new line.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
printf("%d\n", argc - 1);
return (0);
}
