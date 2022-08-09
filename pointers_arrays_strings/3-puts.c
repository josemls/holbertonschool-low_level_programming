#include "main.h"
/**
 * _puts - To print a string
 * @str: string to print
 * Return: void
 */

void _puts(char *str)
{
	int lays = 0;

	while (str[lays] != '\0')
	{
		_putchar(str[lays]);
		lays++;
	}
	_putchar('\n');
}
