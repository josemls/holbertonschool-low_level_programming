#include "main.h"

/**
 * print_rev - print a string in reverse
 *@s: string
 *
 *Return: 0
 */

void print_rev(char *s)
{

	int l;

	for (l = 0; s[l] != '\0'; l++)
		;
	l = l - 1;
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
