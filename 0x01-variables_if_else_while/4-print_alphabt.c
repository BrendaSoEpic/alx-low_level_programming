#include <stdio.h>

/**
 * main - print all letters in lowercase except e and q
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		putchar('\n');
		return (0);
	}
