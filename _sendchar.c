#include "main.h"
/**
 * _putchar - prints a character to the standard output
 * @c: input character
 * Return: returns an int upon success
 */
int _sendchar(char c)
{
  return (write(1, &c, 1));
}
