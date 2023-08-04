#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum, count;
	unsigned int i;
	char *flag;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = strtol(argv[1], &flag, 10);
	count = 0;

	if (*flag)
    {
		printf("Error\n");
		return (1);
	}
    
    while (sum > 1)
    {
        for (i = 0; i < sizeof(cents[i]); i++)
        {
            if (sum >= cents[i])
            {
                count += sum / cents[i];
                sum = sum % cents[i];
            }
        }
    }
    if (sum == 1)
        count++;


	printf("%d\n", count);
	return (0);
}
