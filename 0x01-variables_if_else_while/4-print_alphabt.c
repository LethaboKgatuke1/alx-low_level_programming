#include <stdio.h>

/**
 * main - Program printing alphabet in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
