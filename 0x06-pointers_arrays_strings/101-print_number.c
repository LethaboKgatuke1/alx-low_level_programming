#include "main.h"

/**
 * print_number - used to prints an integer
 * only using the putchar function.
 * no arrays and pointers.
 * @n: integer to be printed.
 *
 * Return: void.
 */

void print_number(int n)
{
	unsigned int num;
/* checking if number is negative*/
	num = n;
	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}
/* printing number by recursion*/
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
