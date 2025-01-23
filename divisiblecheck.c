#include<stdio.h>
#include<math.h>
/* % modular hai jo divide krke remainder btata hai 
1- divisible by 2
0- not divisible by 2
isse odd even bhi dekh sakte hai
even -> -1
odd -> -0         */
int main()
{
    int x;
    printf("enter a number :");
    scanf("%d",&x);
    printf("%d", x % 2 == 0);
    return 0;
}