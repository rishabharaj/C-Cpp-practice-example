#include<stdio.h>
#include<string.h>
int main(){
    char firststr[]="Apple";
    char secstr[]="Banana";
    printf("the string, %d",strcmp(firststr,secstr));
// out put- 0 if equal, +1 if 1st greater , -1 if 2nd greater
    return 0;
}