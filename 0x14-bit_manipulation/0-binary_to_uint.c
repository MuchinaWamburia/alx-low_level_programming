#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string of 0s and 1s.
 *  
 * Return: The converted number, or 0 if an invalid character is found.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;

if (b == NULL)
return (0);

for (; *b; b++)
{
if (*b == '0' || *b == '1')
{
result = result * 2 + (*b - '0');
}
else
{
return (0); 
}
}

return result;
}