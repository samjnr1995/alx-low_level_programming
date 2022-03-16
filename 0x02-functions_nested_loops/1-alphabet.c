#include <stdio.h>
/**
 * main - check the code
 * Return Always 0
 */
void print_alphabet(void);
{
char alphabet;
alphabet= 'a';
_putchar("Lowercase alphabets:\n");
while(alphabet<='z')
{
printf("%c ",alphabet);
alphabet++;
}
return 0;
}

