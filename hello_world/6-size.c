#include<stdio.h>
/**
 * main - size in bytes
 *
 * Return: 0
 */
int main(void)
{
int intType;
float floatType;
long int longintType;
char charType;
long long int longlongintType;

printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of long int: %zu bytes\n", sizeof(longintType));
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of long long int: %zu byte\n", sizeof(longlongintType));
	return (0);
}

