#include<stdio.h>
int sum(int x, int y);
void printTable(n);
int main(){
    int a, b;
    int n;
    printf("enter any number n= ");
    scanf("%d",&n);
    printTable(n);
    // printf("enter number a= ");
    // scanf("%d",&a);
    // printf("enter number b= ");
    // scanf("%d",&b);

    // int s= sum(a,b);
    // printf("%d",s);
    return 0;
}
void printTable(int n){for(int i=1; i<=10; i++)
{printf("%d\n",i*n);}}
    int sum(int x, int y){
        return x+y;
    }
