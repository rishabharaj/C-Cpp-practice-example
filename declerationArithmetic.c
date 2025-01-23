#include<stdio.h>
#include<math.h>
 int main(){
    int divident = 10;
    int divisor = 3;
    int remainder = divident % divisor;
    printf("The remainder of %d divided by %d is %d\n", divident , divisor, remainder);
    return 0;
 }