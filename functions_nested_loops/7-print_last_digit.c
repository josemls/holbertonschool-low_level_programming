#include "main.h"
/**
 * print_last_digit - prints last digit
 *@ld: last number
 * Return: 0
 */
int print_last_digit(int ld)
{

	ld = ld % 10;
	if (ld < 0)
		ld = -ld;
	_putchar(ld + '0');
	return (ld);
}
