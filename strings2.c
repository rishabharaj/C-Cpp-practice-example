#include<stdio.h>
int main (){
    char str[100];
    fgets(str,100,stdin); // fget in new form which is safe
    puts(str);


    return 0;
}