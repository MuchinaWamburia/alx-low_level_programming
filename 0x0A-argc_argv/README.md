# 0x0A. C - argc, argv
•	In C programming, argc and argv are commonly used parameters in the main function to handle command line arguments.
-	argc stands for "argument count" and represents the number of command line arguments passed to the program.
-	argv stands for "argument vector" and is an array of strings, where each element represents a command line argument, including the program name itself.
Here's a brief overview of how they work together:
1.	The main function's signature is int main(int argc, char *argv[]).
2.	argc is an integer representing the number of command line arguments, including the program name. It is always at least 1.
3.	argv is an array of strings, where each string contains a command line argument.
4.	The first element of argv (argv[0]) is the name of the program itself.
5.	The remaining elements (argv[1] onwards) contain the additional command line arguments passed to the program.
Example:
#include <stdio.h>
int main(int argc, char *argv[]) {
printf("Number of arguments: %d\n", argc);

for (int i = 0; i < argc; i++) {
printf("Argument %d: %s\n", i, argv[i]);
}

return 0;
}

# Usage:
$ ./program arg1 arg2 arg3
Number of arguments: 4
Argument 0: ./program
Argument 1: arg1
Argument 2: arg2
Argument 3: arg3

