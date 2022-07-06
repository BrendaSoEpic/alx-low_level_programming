#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	char ch;

	for (ch = 97; ch = 122; ch++)
		if (ch == c)
			return (1);
	return (0);
}
