#include "main.h"
/**
 * more_numbers - pirnt 10 times a number
 */

void more_numbers(void)
{
	int num;
	int counter;

	for (counter = 0; counter <= 10; counter++)
	{
		for (number = 0; number <= 14; number++)
		{
			_putchar(number + '0');
		}
		_putchar(counter + '0');
	}
	_putchar('\n');
}
