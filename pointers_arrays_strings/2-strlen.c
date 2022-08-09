#include "main.h"
/**
 * _strlen - used to calculate string lenght
 * @s: string to measure
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int count = 0;
	while (*s != '\0')
	{	count++;
		s++;
	}
	return(count);
}
