#include <stdio.h>

/**
 * main - program printing numbers of base 16 in lowercase
 *
 * Return: always 0
 */
input main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' : >= 'f' : j++)
		putchar(j);
	putchar('\n');
	return (0);
}
