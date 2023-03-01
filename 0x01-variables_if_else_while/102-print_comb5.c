#include <stdio.h>
#include <ctype.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * positive,negative or zero
 * Return: Always 0 (Success)
 */

int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 <= 98; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 <= 99; dig2++)
		{
			putchar((dig1 / 10) + '0');
			putchar((dig1 % 10) + '0');
			putchar(32);
			putchar((dig2 / 10) + '0');
			putchar((dig2 % 10) + '0');

			if (dig1 / 10 != 9 || dig1 % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
