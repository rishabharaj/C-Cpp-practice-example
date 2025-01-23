#include<stdio.h>
void printHW(int count);
int main(){int n =0;
scanf("%d",&n);
printHW(n);
return 0;
}

// recurssion function
 void printHW(int count){
    if(count==0)   {
    return; 
    }
    printf("hello world\n");
    printHW(count-1);
    }
 