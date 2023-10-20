#include "main.h"
#include <stdio.h>

/**
 * printf_string_nonprint- fuction that prints a string with non printable char
 * @args:agurment holder
 * Return:printedChar
 */
int printf_string_nonprint(va_list args)
{
        int printedChar = 0;
        char *str = va_arg(args, char *);
        int i;
        char hex_code[3];
        const char *null_str = "(null)";

        if (str == NULL)
        {
                while (*null_str)
                {
                        _putchar(*null_str);
                        null_str++;
                        printedChar++;
                }
        }
        else
        {

        while (*str)
        {
                if (*str >= 32 && *str < 127)
                {
                        _putchar(*str);
                }
                else
                { 
			_putchar('\\');
			_putchar('x');
			snprintf(hex_code, sizeof(hex_code), "%02x",(unsigned char) *str);
                        for (i = 0; hex_code[i] != '\0'; i++)
                        {
                                 _putchar(hex_code[i]);
                        }
                }
                printedChar++;
                str++;
        }
        }
        return (printedChar);
}
