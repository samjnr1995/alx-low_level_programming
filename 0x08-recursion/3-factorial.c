#include "main.h"
/**
 * factorial n
 * @n: integer arams
 * Return: recursion
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
return (x * factorial(n - 1));
}
