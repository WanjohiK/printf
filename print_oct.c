#include "main.h"
#include <stdio.h>

/**
* printf_octal- prints octal specifier
* @args:inter arguments
* Return:the printed character
*/
int printf_octal(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int printedChar = 0;
int i;
char octal_str[12];

snprintf(octal_str, sizeof(octal_str), "%o", num);

for (i = 0; octal_str[i] != '\0'; i++)
{
_putchar(octal_str[i]);
printedChar++;
}
return (printedChar);
}

