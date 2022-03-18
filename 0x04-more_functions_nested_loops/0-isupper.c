#include "main.h"
/**
 *
 * _is supper - A func that checks for uppercase character
 * @c: An input characte
 * Return: 1 if c is uppercase or  otherwise
 */
int _isupper(int c)
{
char uppercase = 'A';
int iaupper = 0;
for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
