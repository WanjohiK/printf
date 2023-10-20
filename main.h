#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
/**
* struct format - Represents a format specifier and its corresponding function
* @id: The format specifier string,  "%s", "%d".
* @f: A pointer to the function that handles the format specifier.
*/
typedef struct format
{
char *id;
int (*f)();
} match;
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int print_percent(void);
int _strlenc(const char *str);
int _strlen(char *str);
int printf_integer(va_list args);
int printf_int(va_list args);
int print_string(va_list val);
int printf_binary(va_list args);
int printf_unsigned(va_list args);
int printf_octal(va_list args);
int printf_hex_lower(va_list args);
int printf_hex_upper(va_list args);
int printf_string_nonprint(va_list args);
int printf_pointer(va_list args);

#endif
