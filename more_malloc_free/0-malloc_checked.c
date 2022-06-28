#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocate memory
 * @b: integer
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
