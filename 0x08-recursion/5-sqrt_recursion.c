#include "main.h"
/**
 * find_root - locate square root of n, from the smallest possible
 * @n: n
 * @root: testthis root
 * Return: natural square root, or -1 if not natural root
 */
int find_root(int n, int root)
{
if (root * root > n)
return (-1);

if (root * root == n)
return (root);

return (find_root(n, root + 1));
}
/**
 * _sqrt_recursion - finds natural square root of n
 * @n: n
 * Return: natural root, or -1 if not natural root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (find_root(n, 0));
}
