0X0E. C - STRUCTURES, TYPEDEF
	What are structures, when, why and how to use them
	How to use typedef

1.	Poppy
Define a new type struct dog with the following elements:
	name, type = char *
	age, type = float
	owner, type = char *

2.	1-init_dog.c
Write a function that initialize a variable of type struct dog
	Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

3.	Dog.h
Define a new type dog_t as a new name for the type struct dog.
4.	4-new_dog.c
Write a function that creates a new dog.
	Prototype: dog_t *new_dog(char *name, float age, char *owner);
	You have to store a copy of name and owner
	Return NULL if the function fails

5.	5-free_dog.c
Write a function that frees dogs.
	Prototype: void free_dog(dog_t *d);
