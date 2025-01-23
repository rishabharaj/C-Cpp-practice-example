#include<stdio.h>
#include<math.h>
// checking logical gates statement "and"
int main(){
    int x;
    printf("enter number :");
    scanf("%d",&x);
    printf("%d\n", !(x<1 || x<100));
    return 0;
}