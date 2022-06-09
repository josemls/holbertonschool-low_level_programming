#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet ten times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x, n;

	n = 0;

	while (n < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
		_putchar(x);
		}

		_putchar('\n');
		(n++);
	}
}
