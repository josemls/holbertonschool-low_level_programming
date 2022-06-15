#include "main.h"
/**
 *_strcat - concatenates two strings
 *@src: string
 *@dest: string
 *Return: \0
 */
char *_strcat(char *dest, char *src)
{

	int n;
	int x = 0;

	for (n = 0 ; dest[n] != '\0'; n++)
	{
		x++;
	}
	for (n = 0 ; src[n] != '\0'; n++)
	{
		dest[x + n] = src[n];
	}
	dest[x + n] = '\0';
	return (dest);
