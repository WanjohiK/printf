#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* printf_unsigned- function tha print integer
* @args:int arguments holder
* Return:integer
*/
int printf_unsigned(va_list args)
{
int num;
int i;
int printedChar = 0;
char num_str[12];

num = va_arg(args, int);
snprintf(num_str, sizeof(num_str), "%u", num);


for (i = 0; num_str[i] != '\0'; i++)
{
_putchar(num_str[i]);
printedChar++;
}
return (printedChar);
}
