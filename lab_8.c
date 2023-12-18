//Swapping two variables using pointers 
#include <stdio.h>
#include <stdlib.h>

int main(){
    int var1, var2, temp;
    
    // taking inputs of var1, var2 from the user:
    printf ("This is a program to swap two variables using pointers \n");

    printf("Please enter the value of var 1: \n");
    scanf("%d", &var1);

    printf("Please enter the value of var 2: \n");
    scanf("%d", &var2);

    // value before swapping
    printf("Before swapping:\nvar1 = %d\nvar2 = %d\n", var1, var2);

    // initializing and declaring pointers 
    int *a = &var1;
    int *b = &var2;

    // swapping
    temp = *a;
    *a = *b;
    *b = temp;

    //Outputting the swapped variables
    printf("After swapping:\nvar1 = %d\nvar2 = %d", var1, var2);
    return 0;
}