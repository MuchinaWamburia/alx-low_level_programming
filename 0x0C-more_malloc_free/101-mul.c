#include <stdio.h>
#include <stdlib.h>

int _isdigit(char *s);
int _strlen(char *s);
void _multiply(char *num1, char *num2);

/**
* main - Entry point
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
char *num1, *num2;

if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
{
printf("Error\n");
return (98);
}

num1 = argv[1];
num2 = argv[2];

_multiply(num1, num2);

return (0);
}

/**
* _isdigit - Check if a string contains only digits
* @s: The string to check
*
* Return: 1 if the string contains only digits, 0 otherwise
*/
int _isdigit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}

/**
* _strlen - Calculate the length of a string
* @s: The string
*
* Return: The length of the string
*/
int _strlen(char *s)
{
int len = 0;

while (*s)
{
len++;
s++;
}
return (len);
}

/**
* _multiply - Multiply two numbers represented as strings
* @num1: The first number
* @num2: The second number
*/
void _multiply(char *num1, char *num2)
{
int len1 = _strlen(num1);
int len2 = _strlen(num2);
int *result;
int i, j, carry, n1, n2, sum;

result = calloc(len1 + len2, sizeof(int));

for (i = len1 - 1; i >= 0; i--)
{
n1 = num1[i] - '0';
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
n2 = num2[j] - '0';
sum = n1 * n2 + result[i + j + 1] + carry;
carry = sum / 10;
result[i + j + 1] = sum % 10;
}
result[i] += carry;
}

i = 0;
while (i < len1 + len2 && result[i] == 0)
i++;

if (i == len1 + len2)
printf("0");
else
{
while (i < len1 + len2)
{
printf("%d", result[i]);
i++;
}
}

printf("\n");
free(result);
}
