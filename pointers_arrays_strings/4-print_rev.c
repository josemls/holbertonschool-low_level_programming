#include "main.h"
/**
 * rev_string - to print a string in reverse
 * @s: string recieved
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
			i--;
	}
}
