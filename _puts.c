#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: String to be printed
 * Return: 0
 *
 */
int _puts(char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
