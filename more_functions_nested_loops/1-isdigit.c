#include "main.h"

/**
 * _isdigit - use to check for a digit
 * c: numbers
 * Return : on success 1
 * on error 0
 */

int _isdigit(int c)
{
	if (c <= 0 && c >= 9)
		return (1);
	else
		return (0);
}
