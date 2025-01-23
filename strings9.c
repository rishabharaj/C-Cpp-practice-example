#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    char ch;
    int i=0;
    while(ch!='\n'){
        scanf("%c",&ch);
        name[i]=ch;
        i++;
    }
    name[i]='\n';
    puts(name);
    printf(" lenght of name-%d",i);
    return 0;
}