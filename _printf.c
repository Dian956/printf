#include "main.h"
/**
 * _printf - prints 
* @format: character string
* Return: returns the number of characters printed (excluding the null byte used to end output to strings)
*
*/
int _printf(const char *format, ...)
{
unsigned int g, vcount, verse = 0;
va_list args;

va_start(args, format);

for ( g = 0; format[g] != '\0'; g++)
{
if (format[g] != '%')
{
_sendchar(format[g]);
}
else if (format[g] == '%' && format[g + 1] == 'c')
{
_sendchar(va_arg(args, int));
g++;
}
else if (format[g] == '%' && format[g + 1] == 's')
{
vcount = _puts(va_arg(args, char *));
g++;
verse += (vcount - 1);
}
else if (format[g] == '%' && format[g + 1] == '%')
{
_sendchar('%');
g++;
}
verse++;
}

va_end(args);

return (verse);

}
