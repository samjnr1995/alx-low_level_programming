#include "main.h"
/**
 * print_last - print the last digit of an int
 * Return: Always 0 (success)
 */
int print_last_digit(int)
{
/*Asking for input*/
_putchar("Enter the digit":);
scanf("%d", &num);
digit = num % 10;
/*Displaying output*/
printf("Last Digit of %d is: %d", num, digit);
return 0;
}
