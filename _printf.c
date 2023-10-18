include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Description: This function emulates a subset of printf, handling format
 * specifiers %c, %s, and %%.
 *
 * Return: The number of characters printed (excluding the null byte used to
 * terminate output to strings).
 */
int _printf(const char *format, ...)
{
        va_list args;
        int printed_chars;

        va_start(args, format);
        printed_chars = 0;

        while (*format)
        {
                if (*format != '%') /* Regular character */
                {
                        write(1, format, 1);
                        printed_chars++;
                }
                else /* Format specifier */
                {
                        format++; /* Move past the '%' */
                        printed_chars += handle_format_specifier(&format, args);
                }
                format++; /* Move to the next character in the format string */
        }

        va_end(args);
        return (printed_chars);
}
/**
 * handle_format_specifier - Handle a format specifier
 * @format: Pointer to the format string
 * @args: Argument list
 *
 * Return: The number of characters printed
 */
int handle_format_specifier(const char **format, va_list args)
{
        int printed_chars = 0;

        if (**format == 'c') /* Character */
        {
                char c = va_arg(args, int);

                write(1, &c, 1);
                printed_chars++;
        }
        else if (**format == 's') /* String */
        {
                char *str = va_arg(args, char *);

                if (str == NULL)
                        str = "(null)";
                while (*str)
                {
                        write(1, str, 1);
                        str++;
                        printed_chars++;
                }
        }
        else if (**format == '%') /* Percent sign */
        {
                write(1, "%", 1);
                printed_chars++;
        }

        return (printed_chars);
}
