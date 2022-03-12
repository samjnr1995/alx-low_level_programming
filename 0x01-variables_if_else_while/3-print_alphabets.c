#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
int ch;
for (c = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z; ch++)
putchar(ch);
putchar('\n');
return (0);
