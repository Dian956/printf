#include "main.h"
void print_output(char buffer[], int *output_ind);
/**
* _printf - Printf function
* @format: format.
* Return: Printed chars.
*/
int _printf(const char *format, ...)
{
 int i, output = 0, outputed_chars = 0;
 int flags, width, precision, size, output_ind = 0;
 va_list list;
 char buffer[BUFF_SIZE];
 if (format == NULL)
 return (-1);
 va_start(list, format);
 for (i = 0; format && format[i] != '\0'; i++)
 {
 if (format[i] != '%')
 {
 buffer[output_ind++] = format[i];
 if (output_ind == BUFF_SIZE)
 print_output(buffer, &output_ind);
 /* write(1, &format[i], 1);*/
 outputed_chars++;
 }
 else
 {
 print_output(buffer, &output_ind);
 flags = get_flags(format, &i);
 width = get_width(format, &i, list);
 precision = get_precision(format, &i, list);
 size = get_size(format, &i);
 ++i;
 output = handle_print(format, &i, list, buffer,
 flags, width, precision, size);
 if (output == -1)
 return (-1);
 outputed_chars += output;
 }
 }
 print_output(buffer, &output_ind);
 va_end(list);
 return (outputed_chars);
}
/**
* print_output - Prints the contents of the buffer if it exists
* @buffer: Array of chars
* @output_ind: Index at which to add the next char, represents the length.
*/
void print_output(char buffer[], int *output_ind)
{
 if (*output_ind > 0)
 write(1, &buffer[0], *output_ind);
 *output_ind = 0;
}
