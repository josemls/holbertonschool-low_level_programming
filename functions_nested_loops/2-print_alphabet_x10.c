#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet ten times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x;

	x = 0;

	while (x < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
		_putchar(x);
		}
		x++;
	_putchar('\n');
	}
}
