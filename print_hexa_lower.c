#include "main.h"
#include <stdio.h>
/**
* printf_hex_lower-prints hexadeci integer (lowercase)
* @args:interger argument holder
* Return: the printed char
*/
int printf_hex_lower(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int printed_chars = 0;
char hex_str[12];
int i;

snprintf(hex_str, sizeof(hex_str), "%x", num);

for (i = 0; hex_str[i] != '\0'; i++)
{
_putchar(hex_str[i]);
printed_chars++;
}
return (printed_chars);
}
