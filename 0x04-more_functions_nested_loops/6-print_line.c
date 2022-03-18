#include "main.h"
/**
 * print_line - a func that draws a straight line in terminal
 * followed by a new line
 * @n: An integer
 * Returns: Always 0
 */
void print_line(int n)
{
int i = 0;
if (n > 0)
{
for (; i < n; i++)
_putchar('_');
}
_putchar('\n');
}
