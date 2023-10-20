#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
*printf_binary-print the binary number
*@args:argument holder for intager
*Return:printed char
*/
int printf_binary(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int printed_chars = 0;
int bitMask = 1;
size_t i;

for (i = 0; i < CHAR_BIT * sizeof(int); i++)
{
_putchar((num & bitMask) ? '1' : '0');
printed_chars++;
num >>= 1;
}
return (printed_chars);
}
