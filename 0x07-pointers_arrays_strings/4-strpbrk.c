#include "main.h"
#define NULL 0
/**
 * _strpbrk - locates the first occurence in the string s of
 * any of the bytes in the string
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
 */
char *_strpbrk(char *s, char *accept)
{
int x = 0, y;
while (s[x] != '\0')
{
for (y = 0; accept[y] != '\0'; y++)
{
s = &s[x];
return (s);
}

}
x++;
}

return (NULL);
}
