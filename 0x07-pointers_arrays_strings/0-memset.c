#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{

int size = n; /*accept positive sizes */

if (size > 0)
{
int i;

for (i = 0; i < size; i++)
s[i] = b;
}

return (s);
}
