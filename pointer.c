#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age; // Pointer ptr stores the address of age
    int _age= *ptr;

    printf("1 value of age(using %%d): %d\n", age);// %d specifier for the int not pointers
    printf("2 Value of age (%%d(*ptr)dereferencing pointer): %d\n", *ptr); // Print the value stored at the address ptr is pointing to
    printf("3 value at address of age(%%d using &): %d\n", *(&age));//print value at address of age
    printf("4 Address of age(using &): %p\n", &age); // Print the address of age
    printf("5 Value of age (using pointer): %p\n", ptr); // Print the address stored in ptr
    printf("6 Address of the pointer variable ptr(using &): %f\n", &ptr);
    printf("7 Address of _age: %p\n",_age); //_age is not a pointer,
                       // so using %p to print its value will result in undefined behavior.
    printf("8 Address of _age: %d\n",_age);// but if %d it will give the value of _age which is trasfer by pointer
    printf("9 Address of _age(using & ): %p\n", &_age); //Print the address of _age

    printf("%p",ptr); //prints the memory address in hexadecimal formate if %p 
                        // & if %d pointer value as a signed integer.
    return 0;
}
