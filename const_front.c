#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);

/**
 * _printf - printf function
 * @format: A format string
 * @...: The variadic arguments
 *
 * Return: Total number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) == ' ')
		{
			return (-1);
		}
		else if (*format == '%' && *(format + 1) == '\0')
		{
			return (-1);
		}
		else if (*format == '%' && *(format + 1) == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
			{
				count += _puts("(null)");
			}
			else
			{
				count += _puts(str);
			}
			format += 2;
		}
		else
		{
			_putchar(*format);
			count++;
			format++;
		}
	}
	va_end(args);
	return (count);
}
