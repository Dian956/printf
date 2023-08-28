#include "main.h"
/**
* _puts - prints a string
* @c: input string
* Return: returns namba of bytes
*
*/
int _puts(char *c)
{
int scount;

if (c)
{
for (scount = 0; c[scount] != '\0'; scount++)
{
_sendchar(c[scount]);
}
}

return (scount);
}
