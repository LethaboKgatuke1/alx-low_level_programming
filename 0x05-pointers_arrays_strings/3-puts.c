#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: The string
 */

void _puts(char *str)
{
	while (*str)
		puts(str);

	_putchar('\n');
}
