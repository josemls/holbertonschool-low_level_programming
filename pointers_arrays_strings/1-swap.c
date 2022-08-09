#include "main.h"
/**
 * swap_int - used to change two values
 * @a: value to change
 * @b: value to change
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
		*a = *b;
		*b = x;
}
