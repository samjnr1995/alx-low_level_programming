#include <stdio.h>
/**
 * main - prints the lowercase alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar(ch);
}
putchar('\n');
return (0);
}
