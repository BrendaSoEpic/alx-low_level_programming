#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is a function to print its name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result = 0, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 + atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
