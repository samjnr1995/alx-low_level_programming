#include "main.h"
/**
 * _print_rev_recursion - reverse
 * @s: pointer to a string params
 *
 */
void _print_rev_recursion(cha *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
