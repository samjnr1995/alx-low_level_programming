#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: n is an integer
 *
 * Return: integer
 */
int _abs(int c)
{
if (c < 0)
{
return (c * (-1));
}
else if (c == 0)
{
return (0);
}
else
{
return (c);
}
}
