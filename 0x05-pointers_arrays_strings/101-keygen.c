#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Generates a random valid password for 101-crackme
*
* Return: Always 0.
*/
int main(void)
{
int password_length = 9;
char password[10];

srand(time(NULL));

int i;
for (int i = 0; i < password_length; i++)
{
password[i] = rand() % 94 + 33;
}

password[password_length] = '\0';

printf("%s\n", password);

return (0);
}
