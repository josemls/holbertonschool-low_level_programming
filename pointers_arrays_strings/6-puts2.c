#include "main.h"
/**
 * puts2 - prints every other character
 *@str: string
 *
 *Return: 0
 */
void puts2(char *str)
{

	int n;
	int i;

	for (n = 0; str[n] != '\0'; n++)
		;
	for (i = 0; i < n; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
