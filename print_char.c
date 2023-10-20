#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
* printf_char - fuction taht prints a character
* @val: the aguments
* Return:1 success
*/
int printf_char(va_list val)
{
char str;

str = va_arg(val, int);
_putchar(str);
return (1);
}
