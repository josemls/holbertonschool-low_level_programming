#include <stdio.h>
/**
 * main - Printing number 1 to 9
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
