#include "main.h"
/**
* print_string- function taht prints a string.
* @val:expected arguments
* Return:length
*/
int print_string(va_list val)
{
char *str;
int i;
int len;

str = va_arg(val, char *);
if (str == NULL)
{
str = "(NULL)";
}
len = _strlen(str);
for (i = 0; i < len; i++)
{
_putchar(str[i]);
}
return (len);
}
