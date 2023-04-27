#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count
 * @argv: string array of arguments
 *
 * Return: 0 (success) else 1 (failure)
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	/*one for program name and two for the int values */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		sum *= atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
