#include<stdio.h>
int main(){
    int *ptr;
    int x=1;

    ptr = &x; // address of x stored in ptr
    *ptr = x; //Dereferences ptr and assigns the value of x (which is 1) 
            //to the memory location pointed to by ptr. (indirectly x= direct x)
    *ptr = 0; // Dereferences ptr and assigns 0 
            //to the memory location pointed to by ptr. Now, the value of x is 0. 
    *ptr = x;  //( indirectly x = x)
    
    printf("x = %d\n",x);
    printf("*ptr = %d\n",*ptr);

    *ptr += 5;
    printf("x = %d\n",x);
    printf("*ptr = %d\n",*ptr);

    (*ptr)++ ;
    printf("x = %d\n",x);
    printf("*ptr = %d\n",*ptr);
}