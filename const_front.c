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
	int i = 0;
	int j = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					{
						char c = va_arg(args, int);

						_putchar(c);
						count++;
						break;
					}
					case 's':
					{
						char *s = va_arg(args, char *);

					if (s == NULL)
						{
							_putchar('\0');
							 count++;
						}
					else
						{
					for (j = 0; s[j] != '\0'; j++)
					{
						_putchar(s[j]);
						count++;
					}
						}
					break;
					}
					default:
					_putchar('%');
					_putchar(format[i]);
					count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(args);
	return (count);
}
