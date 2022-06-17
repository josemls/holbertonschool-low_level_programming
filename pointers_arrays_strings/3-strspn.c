#include "main.h"
/**
* *_strspn - length prefix
* @s: the string
* @a: the string 
*
* Return: pointer to dest.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
	for (j = 0; a[j]; j++)
	{
		if (s[i] == a[j])
		{
			break;
		}
	}
		if (!a[j])
		{
		break;
		}
	}
	return (i);
}
