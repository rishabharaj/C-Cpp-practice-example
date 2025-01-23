#include<stdio.h>
void printAddress(int n);
void printAddressbyreffrence2(int *n);
int main(){
    int n = 4;
    printf("%p\n",&n);
    printAddress(n);
    printAddressbyreffrence1(&n);
    printAddressbyreffrence2(n);
    return 0;
}
void printAddress(int n){
printf("%p\n",n);//different address print kr rha because copy ja rhi n ki jiski different memory location hai
}
void printAddressbyreffrence1(int n){
    printf("%p\n",n);
}void printAddressbyreffrence2(int *n){
    printf("%p\n",&(*n));
}