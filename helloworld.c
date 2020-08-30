// Demonstrate using simple functions

#include <stdio.h>

// Declare funcs at top
void first_function(void);
void second_function(int);

int main(void){
    printf("hello world v2!\n");

    // call a func
    first_function();
    printf("goodbye world\n");

    return 0;
}

// Define funcs
void first_function(void)
{
    printf("Starting first function\n");
    // declare some variables -- <type> <name> = <value>
    int a = 3;
    char b = 'c';
    printf("a = %d, b = %c\n", a, b);
    void *where_prohibited = NULL; // special type 'void'

    second_function(a);

    a = 10;

    printf("First function done\n");

}

void second_function(int a)
{
    printf("Starting second function\n");
    int b = a;
    printf("now b = %d\n", b);
    printf("Second function done\n");

}

