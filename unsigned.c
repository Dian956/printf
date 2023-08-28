#include "main.h"
/**
 * print_unsigned - prints unsigned integrs
 * @num: input
 *
 */
void print_unsigned(unsigned int num)
{
  int i, digits, digit, divisor;

  digits = integers_count(num, 10);
  divisor = 1;

  for (i = 0; i < digits; i++)
    {
      divisor *= 10;
    }

  while (divisor > 0)
    {
      digit = num / divisor;
      _sendchar('0' + digit);
      num %= divisor;
      divisor /= 10;
    }
}
