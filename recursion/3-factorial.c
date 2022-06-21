#include "main.h"
/**
 * factorial - return the factorial number
 * @n: factorial number
 * Return: 0 or 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
