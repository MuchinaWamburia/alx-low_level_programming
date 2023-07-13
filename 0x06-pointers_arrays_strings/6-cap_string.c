#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @str: The string to modify.
*
* Return: A pointer to the modified string str.
*/
char *cap_string(char *str)
{
int i;
int capitalize_next = 1;

/* Flag to indicate if the next character should be capitalized */

for (i = 0; str[i] != '\0'; i++)
{
if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] = str[i] - 'a' + 'A';
}

capitalize_next = 0;

if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
{
capitalize_next = 1;
}
}

return (str);
}
