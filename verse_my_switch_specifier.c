#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
* switch_character - switch specifiers
* @format: string input
* @args: arguments
* Return: int
*/
int switch_character(const char *format, va_list args)
{
int count_verse = 0;
const char *ptr = format;
char output_buffer[1024];
int buffer_index = 0;

while (*ptr != '\0')
{
if (*ptr == '%')
{
ptr++;
switch (*ptr)
{
case '%':
output_buffer[buffer_index++] = '%';
if (buffer_index == 1024)
{
count_verse += buffer_print(output_buffer, buffer_index);
buffer_index = 0;
}
break;
case 's':
handle_string_specifier(output_buffer, &count_verse, &buffer_index, args);
break;
case 'c':
handle_char_spef(output_buffer, &count_verse, &buffer_index, args);
break;
case 'd':
case 'i':
handle_int_spef(output_buffer, &count_verse, &buffer_index, args, ptr);
break;
case 'b':
handle_unsignedint(output_buffer, &count_verse, &buffer_index, args);
break;
}
}
else
{
output_buffer[buffer_index++] = *ptr;
if (buffer_index == 1024)
{
count_verse += buffer_print(output_buffer, buffer_index);
buffer_index = 0;
}
}
ptr++;
}

if (buffer_index > 0)
{
count_verse += buffer_print(output_buffer, buffer_index);
}

return (count_verse);
}
