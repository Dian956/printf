#include "main.h"
/**
* integers_count - counts the number of integers
* @n: input integer
* Return: returns the number of digits
*
*/
int integers_count(int n)
{
int conn = 0;

while (n != 0)
{
n /= 10;
conn++;
}
return (conn);
}
