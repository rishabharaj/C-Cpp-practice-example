#include<stdio.h>
#include<string.h>
int main(){
    char firstString[100]="Hello";  // first string me free size to taki 2nd jud sake isme
    char secondString[]="World";
    strcat(firstString,secondString);
    puts(firstString);

    return 0;
}