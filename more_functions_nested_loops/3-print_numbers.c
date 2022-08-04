#include "main.h"
/**
 * print_numbers - To print numbers
 * @num : The numbers
 * Return: 0
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar('\n'num + '0');
	}
}

