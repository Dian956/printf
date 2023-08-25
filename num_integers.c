#include "main.h"
/**
* integers_count - counts the number of integers
* @n: input integer
* @ct: base count
* Return: returns the number of digits
*
*/
int integers_count(unsigned int n, int ct)
{
int conn = 0;

if (n == 0)
return (1);

while (n != 0)
{
n /= ct;
conn++;
}
return (conn);
}
