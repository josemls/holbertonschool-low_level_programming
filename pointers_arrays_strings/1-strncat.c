#include "main.h"
/**
 * _strncat - Concatenate string to the n number
 * @dest: destination
 * @src: source
 * @n: number pf characters
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0' && s < n)
	{
		dest[d] = src[s];
		s++;
		d++;
	}
		dest[d] = '\0';

		return (dest);
}

