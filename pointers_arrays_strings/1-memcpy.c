#include "main.h"
/**
* *_memcpy - copies memory area
* @dest: string
* @src: strin 2
* @n: the size to print
*
* Return: pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest, *s = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*d = *s;
		s++;
		d++;
	}
	return (dest);
}
