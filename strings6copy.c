#include<stdio.h>
#include<string.h>
int main(){
    char newStr[]="newString";
    char oldStr[]="oldString";
    strcpy(newStr,oldStr);
    puts(newStr);
    return 0;
}