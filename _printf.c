#include "main.h"
/**
* implement1 -  produces output according to a format.
* @n: character string
* @m: input
* @g: input
* Return: returns the number of characters printed
*
*/
static void implement1(int n, int m, int g, unsigned int bits, char *str)
{
if (format[g] == '%' && format[g + 1] == 'x')
{
binary = va_arg(args, unsigned int);
vcount = integers_count(binary);
print_hex(binary, 0);
g++;
verse += (vcount - 1);
}
else if (format[g] == '%' && format[g + 1] == 'X')
{
binary = va_arg(args, unsigned int);
vcount = integers_count(binary);
print_hex(binary, 1);
g++;
verse += (vcount - 1);
}
else if (format[g] == '%' && format[g + 1] == 'o')
{
binary = va_arg(args, unsigned int);
vcount = integers_count(binary);
print_octal(binary);
g++;
verse += (vcount - 1);
}
else if (format[g] == '%' && format[g + 1] == 'u')
{
binary = va_arg(args, unsigned int);
vcount = integers_count(binary);
print_unsigned(binary);
g++;
verse += (vcount - 1);
}
}

/**
* _printf -  produces output according to a format.
* @format: character string
* Return: returns the number of characters printed
*
*/
int _printf(const char *format, ...)
{
int g, vcount, vnum = 0, verse = 0;
unsigned int binary = 0;
va_list args;

if (!format || (format[0] == '%' && format[1] == '\0') || format == NULL)
return (-1);
va_start(args, format);
for (g = 0; format[g] != '\0'; g++)
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
else if (format[g] == '%' && (format[g + 1] == 'i' || format[g + 1] == 'd'))
{
vnum = va_arg(args, int);
vcount = integers_count(vnum);
int_print(vnum);
g++;
verse += (vcount - 1);
}
else if (format[g] == '%' && format[g + 1] == 'b')
{
binary = va_arg(args, unsigned int);
vcount = integers_count(binary);
print_binary(binary);
g++;
verse += (vcount - 1);
}
implement1(verse, vcount, g, binary, format)
verse++;
}
va_end(args);
return (verse);
}
