#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: is an integer
 * Description: prints the last digit of a number
 * Return: integer
 */
int print_last_digit(int)
{
int last = n % 10;
if (n < 0)
last = last * -1;
_putchar(last + '0');
return (last);
}
