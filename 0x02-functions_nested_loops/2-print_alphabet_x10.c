#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int t;

	for (i = 0; i < 10; i++)
	{
		char ch;

		for (ch = 97; ch <= 122; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
