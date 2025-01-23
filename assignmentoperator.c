#include<stdio.h>
#include<math.h>
// assignment operators examples
int main(){
    printf(" sabki basic value mene 10 li hai\n");

    int a=10;
    a+=20; //add itself number first
    printf("a+=20 :%d\n", a);

    int b=10;
    b-=10; // substract itself number first
    printf("b-=10 :%d\n",b);

    int c=10;
    c*=8; // multiply itself number first
    printf("c*=8 :%d\n",c);

    int d=10;
    d/=5; //devide itself number by given number
    printf("d/=5 :%d\n",d);

    int e=10;
    e%=5; // modulator divide by itself number and give remainder
    printf("e%c =10: %d\n",e);
    return 0;
}