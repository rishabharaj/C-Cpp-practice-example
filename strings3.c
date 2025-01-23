#include<stdio.h>
int main(){
    char *canChange ="Hello World";
    puts(canChange); // can be reinitialized
    canChange="hello";
    puts(canChange);
    
    char cantChange[]= "hello World";
    puts(cantChange);
   // cantChange= "hello"; // cant be reinitialized 
    puts(canChange);
    return 0;
}