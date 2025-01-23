#include<stdio.h>
void doWork(int a, int b, int *sum, int *prod, int *avg);
int main(){
int sum, prod, avg;
int a =3 , b=5 ;
doWork(a,b, &sum, &prod, &avg);
printf("sum = %d, product = %d, avg = %d", sum,prod,avg);
return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg){
    *sum= a+b;
    *prod = a*b;
    *avg = (a+b)/2;
    return ;
}