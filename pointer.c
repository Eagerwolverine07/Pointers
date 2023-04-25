#include <stdio.h>

int main() {
    int num = 10; // declare an integer variable
    int *ptr; // declare a pointer variable
    ptr = &num; // store the address of num in the pointer variable
    
    printf("Value of num: %d\n", num); // output the value of num
    printf("Address of num: %p\n", &num); // output the address of num
    printf("Value of ptr: %p\n", ptr); // output the value of ptr
    printf("Value pointed to by ptr: %d\n", *ptr); // output the value pointed to by ptr
    
    *ptr = 20; // change the value of num indirectly through the pointer
    printf("New value of num: %d\n", num); // output the new value of num
    
    return 0;
}
