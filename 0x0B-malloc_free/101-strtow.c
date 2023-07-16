#include "main.h"
#include <stdlib.h>
#include <string.h>

int count_words(char *str);
char **strtow(char *str);

/**
* count_words - Counts the number of words in a string
* @str: The input string
*
* Return: The number of words
*/
int count_words(char *str)
{
int i, count = 0, len = strlen(str);
int in_word = 0;

for (i = 0; i < len; i++)
{
if (str[i] == ' ')
{
in_word = 0;
}
else if (in_word == 0)
{
in_word = 1;
count++;
}
}

return count;
}

/**
* strtow - Splits a string into words
* @str: The input string
*
* Return: A pointer to an array of strings (words)
*/
char **strtow(char *str)
{
char **words;
int i, j, k, len = strlen(str);
int word_count = count_words(str);

if (str == NULL || str[0] == '\0')
return NULL;

words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return NULL;

j = 0;
for (i = 0; i < len; i++)
{
if (str[i] == ' ')
continue;

k = i;
while (str[i] != ' ' && str[i] != '\0')
i++;

words[j] = malloc((i - k + 1) * sizeof(char));
if (words[j] == NULL)
{
for (i = 0; i < j; i++)
free(words[i]);
free(words);
return NULL;
}

strncpy(words[j], &str[k], i - k);
words[j][i - k] = '\0';
j++;
}

words[j] = NULL;
return words;
}
