#include<stdio.h>
int main(){
    int age1 = 22;
    int age2 = 23;
    int *ptr1 = &age1;
    int *ptr2 = &age2;

    printf("%u, %u\n difference = %u\n",ptr1, ptr2, ptr1-ptr2);
    printf("comparision = %u",ptr1==ptr2);
    return 0;
}