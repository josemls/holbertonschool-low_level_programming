#include "main.h"
/**
 * swap_int - Swap integers
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n = *a;
		*a = *b;
		*b = n;
}

