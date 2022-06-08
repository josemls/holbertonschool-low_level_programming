#include <stdio.h>
/**
 * main - Print numbers hex
 *
 * Return: 0
 */
int main(void)
{
	char num;

	for (num = '1'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
