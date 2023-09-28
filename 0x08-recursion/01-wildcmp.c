#include "main.h"

/**
 * wildcmp - Compares two strings and
 * checks if they can be considered identical.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0') /* Check if s2 ends with '*' */
return (1);

if (*s1 != '\0' && wildcmp(s1 + 1, s2)) /* Match '*' with current character */
return (1);

return (wildcmp(s1, s2 + 1)); /* Skip '*' and compare remaining characters */
}

if (*s1 == '\0')
return (*s2 == '\0');

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));/* Charactersmatchcompareremainingcharacters*/

return (0); /* Characters don't match */
}
