#include "main.h"
#include <stdio.h>
/**
 * printf_pointer- function that prints a pointer
 * @args:arguments holder
 * Return:printed char
 */
int printf_pointer(va_list args)
{
        void *ptr = va_arg(args, void  *);
        int printedChar = 0;
        char ptr_str[18];
        int i;

        snprintf(ptr_str, sizeof(ptr_str), "%p", ptr);

        for (i = 0; ptr_str[i] != '\0'; i++)
        {
                _putchar(ptr_str[i]);
                printedChar++;
        }
        return (printedChar);
}
