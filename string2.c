#include<stdio.h>
void printstring(char arr[]);
int main(){
    char name[]= "Rishabharaj";
    char sur_name[]= "Sharma";
    printstring(name);
    printstring(sur_name);
    return 0;
}
void printstring(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
    }printf("\n");
}    