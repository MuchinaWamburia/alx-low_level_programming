# 0x0E. C - Structures, typedef
A structure in C is a user-defined data type that groups together variables of different data types under a single name. Each variable within a structure is called a member, and the members can be of different data types. The structure allows you to create a composite data type that represents a collection of related data.
Here's an example of a structure:
struct Point {
    int x;
    int y;
}
In this example, Point is the structure tag, and x and y are the members.
You can create instances of a structure and access its members using the dot (.) operator:
struct Point p1;
p1.x = 3;
p1.y = 7;
Typedef:
The typedef keyword in C is used to create a new type name (alias) for an existing data type. It allows you to define a custom name for a data type, which can make your code more readable and maintainable.
For example:
typedef int Age;
In this case, Age becomes an alias for the int data type.
You can also use typedef with structures to create shorter and more convenient names for complex data types:
typedef struct {
int x;
int y;
} Point;
In this example, Point is an alias for the anonymous structure definition.
Using typedef can make your code more expressive and easier to understand, especially when working with complex data structures or when defining function pointers.
Combining structures and typedef can lead to more readable and organized code, allowing you to create custom data types that abstract away implementation details and improve code clarity

