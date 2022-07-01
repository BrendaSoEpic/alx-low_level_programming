#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * Description - main value
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
