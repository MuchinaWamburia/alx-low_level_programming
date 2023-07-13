#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - Concatenates two strings up to n bytes.
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of bytes from s2 to concatenate.
*
* Return: Pointer to the concatenated string (s1 followed by s2 up to n bytes),
*         or NULL if memory allocation fails.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, concatLen;
char *concat;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
concatLen = len1 + len2;
else
concatLen = len1 + n;

concat = malloc(sizeof(char) * (concatLen + 1));
if (concat == NULL)
return (NULL);

strcpy(concat, s1);
strncat(concat, s2, n);

return (concat);
}
