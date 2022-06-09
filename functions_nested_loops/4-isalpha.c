#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *@a: test
 * Return: Always 0.
 */

int _isalpha(int a)
{

	if (a >= 65 && a <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
