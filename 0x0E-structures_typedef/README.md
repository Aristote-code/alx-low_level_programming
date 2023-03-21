Task 0
c
Copy code
#include <stdio.h>

/**
 * struct dog - dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct called dog with name, age, and owner as elements
 */

typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog;

int main(void)
{
    dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
Task 1
c
Copy code
#include "dog.h"

/**
 * init_dog - initialize a dog structure
 * @d: dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
Task 2
c
Copy code
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog information
 * @d: dog structure
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        if (d->name == NULL)
            printf("Name: (nil)\n");
        else
            printf("Name: %s\n", d->name);

        printf("Age: %.6f\n", d->age);

        if (d->owner == NULL)
            printf("Owner: (nil)\n");
        else
            printf("Owner: %s\n", d->owner);
    }
}
Task 3
cpp
Copy code
typedef struct dog dog_t;