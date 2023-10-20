#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
* _printf-similar to printf
* @format:the format string
* Return:char printed
*/

int _printf(const char *format, ...)
{
match m[] = {
{"%c", printf_char},
{"%%", print_percent},
{"%s", print_string},
{"%d", printf_int},
{"%i", printf_integer},
{"%b", printf_binary},
{"%o", printf_octal},
{"%x", printf_hex_lower},
{"%X", printf_hex_upper},
{"%S", printf_string_nonprint},
{"%p", printf_pointer}
};
int printed_chars = 0;
int i = 0;
int j;
va_list args;


va_start(args, format);

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
Here:
while (format[i] != '\0')
{
j = 10;
while (j >= 0)
{
if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
{
printed_chars = printed_chars + m[j].f(args);
i = i + 2;
goto Here;
}
j--;
}
_putchar(format[i]);
i++;
printed_chars++;
}
va_end(args);
return (printed_chars);
}
