#include "main.h"
/**
 * _strcat - to concatenate two strings
 * @dest: destination
 * @src: source
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
		{	d++;
		}
	for (s = 0; src[s] != '\0'; s++, d++)
	{
		dest[d] = src[s];
	}
	dest[d] = '\0';

	return (dest);
}
