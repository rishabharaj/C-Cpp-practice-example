#include<stdio.h>
#include<string.h>
int countlenght(char array[]);
int main(){
    char name[100];
    fgets(name,100,stdin);
    printf("the lenght of name is = %d\n",countlenght(name)); // by making function 
    printf("the lenght of name is = %d\n",strlen(name)); // by standard library function
                    // exclude null character but not in input but agar input pehle se diya hai
                // to wo exclude krkre btata hai see in strings4part2.c
    return 0;
}
int countlenght(char array[]){
    int count =0;
for(int i=0;array[i]!='\0';i++){
    count++; }
    return count-1; }