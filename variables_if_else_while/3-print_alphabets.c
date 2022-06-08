#include <stdio.h>
/*
 * main - "program that prints all lower and then upper"
 *
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)

		putchar(ch);

		putchar('\n');

	for (ch = 'A'; ch <= 'Z'; ch++)

		putchar(ch);

		putchar ('\n');

			return (0);
}

